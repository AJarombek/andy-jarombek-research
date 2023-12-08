## Overview

Basic example API that uses Go to read from a SQLite database and return a JSON response.

### Commands

```bash
# Set your desired port
PORT=5002

# Start the API
PORT=$PORT docker-compose up
```

```bash
# Query the API
curl localhost:$PORT/employees
```