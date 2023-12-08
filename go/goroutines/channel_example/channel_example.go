/**
 * Basic Go code to pass to data to and from a goroutine via a channel.
 * Author: Andrew Jarombek
 * Date: 9/4/2022
 */

package main

import (
	"fmt"
	"sync"
)

func double(out chan int, in chan int, wg *sync.WaitGroup) {
	defer wg.Done()
	for {
		value, ok := <-in
		if !ok {
			return // Channel closed, exit the goroutine
		}
		result := value * 2

		fmt.Println("double")
		out <- result
	}
}

func doubleV2(out chan<- int, in <-chan int, wg *sync.WaitGroup) {
	defer wg.Done()
	for {
		value, ok := <-in
		if !ok {
			return // Channel closed, exit the goroutine
		}
		result := value * 2

		fmt.Println("doubleV2")
		out <- result
	}
}

func main() {
	var wg sync.WaitGroup

	out1 := make(chan int)
	in1 := make(chan int)
	wg.Add(1)
	go double(out1, in1, &wg)

	in1 <- 2
	result := <-out1
	fmt.Printf("Double 2 = %d\n", result) // Double 2 = 4

	in1 <- 5
	result = <-out1
	fmt.Printf("Double 5 = %d\n", result) // Double 5 = 10

	close(in1)
	wg.Wait() // Wait for goroutine to finish before closing channels
	close(out1)

	out2 := make(chan int)
	in2 := make(chan int)
	wg.Add(1)
	go doubleV2(out2, in2, &wg)

	in2 <- 2
	result = <-out2
	fmt.Printf("Double 2 = %d\n", result) // Double 2 = 4

	in2 <- 5
	result = <-out2
	fmt.Printf("Double 5 = %d\n", result) // Double 5 = 10

	close(in2)
	wg.Wait() // Wait for goroutine to finish before closing channels
	close(out2)

	out3 := make(chan int, 2)
	in3 := make(chan int, 2)
	wg.Add(1)
	go double(out3, in3, &wg)

	in3 <- 2
	in3 <- 5

	result = <-out3
	fmt.Printf("Double 2 = %d\n", result) // Double 2 = 4

	result = <-out3
	fmt.Printf("Double 5 = %d\n", result) // Double 5 = 10

	close(in3)
	wg.Wait() // Wait for goroutine to finish before closing channels
	close(out3)
}
