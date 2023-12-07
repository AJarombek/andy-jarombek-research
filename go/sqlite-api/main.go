/**
 * API for returning employee information.
 * Author: Andrew Jarombek
 * Date: 5/7/2022
 */

package main

import (
	"database/sql"
	"github.com/gin-gonic/gin"
	_ "github.com/mattn/go-sqlite3"
	"net/http"
)

var DB *sql.DB

type employee struct {
	ID int `json:"id"`
	Gender string `json:"gender"`
}

func entrypoint(c *gin.Context) {
	c.JSON(http.StatusOK, nil)
}

func getEmployees(c *gin.Context) {
	rows, err := DB.Query("SELECT id, gender FROM employees")

	if err != nil {
		c.AbortWithStatus(500)
		return
	}

	defer rows.Close()
	employees := make([]employee, 0)

	for rows.Next() {
		employeeRow := employee{}
		err = rows.Scan(&employeeRow.ID, &employeeRow.Gender)

		if err != nil {
			c.AbortWithStatus(500)
			return
		}

		employees = append(employees, employeeRow)
	}

	err = rows.Err()

	if err != nil {
		c.AbortWithStatus(500)
		return
	}

	c.IndentedJSON(http.StatusOK, employees)
}

func main() {
	db, err := sql.Open("sqlite3", "./employees.db")

	if err != nil {
		panic("Failed to connect to SQLite")
	}

	DB = db
	router := gin.Default()
	router.GET("/", entrypoint)
	router.GET("/employees", getEmployees)
	err = router.Run("0.0.0.0:5000")

	if err != nil {
		panic("Failed to start the API")
	}
}