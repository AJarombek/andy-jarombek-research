### Overview

Go programming code, tested and run on Docker containers.  Builds are performed using Please Build.

### Commands

**Running Tests using Please Build**

```bash
# Run all the tests in the repository
plz test //... -i test -vvv

# advanced-concurrency directory
plz test //advanced-concurrency:test -vvv
plz run //advanced-concurrency:go_run_sh -vvv

# composite-types directory
plz test //composite-types:test -vvv

# functions directory
plz test //functions:test -vvv

# go-tool directory
plz test //go-tool:test -vvv
plz run //go-tool:go_run -vvv

# goroutine directory
plz test //goroutines:test -vvv

plz build //goroutines/channel_example:binary -vvv
./plz-out/bin/goroutines/channel_example/channel_example

plz build //goroutines/goroutine_example:binary -vvv
./plz-out/bin/goroutines/goroutine_example/goroutine_example

# interfaces directory
plz test //interfaces:test -vvv

# low-level-programming directory
plz test //low-level-programming:test -vvv

# methods directory
plz test //methods:test -vvv

# reflection directory
plz test //reflection:test -vvv

# unit-testing directory
plz test //unit-testing:test -vvv
```

**Create Base Docker Image**

```bash
docker login --username=ajarombek
docker image build -t go-alpine-linux-programming:latest ./base

# Push image to DockerHub with tag 'latest'
docker image tag go-alpine-linux-programming:latest ajarombek/go-alpine-linux-programming:latest
docker push ajarombek/go-alpine-linux-programming:latest
```

**Fix the `go.mod` file.**

```bash
go mod tidy
```

**Format the Go code.**

```bash
go fmt
```

**Install Please Build locally (MacOS).**

```bash
curl https://get.please.build | bash
source ~/.profile
plz --version
plz --help
```

**Initialize Please in the Repo**

```bash
plz init
```

### Directories

| Directory Name          | Description                                                                                             |
|-------------------------|---------------------------------------------------------------------------------------------------------|
| `.github`               | GitHub Actions for CI/CD pipelines.                                                                     |
| `.run`                  | Run configurations to use in the GoLand IDE.                                                            |
| `advanced-concurrency`  | Go code for advanced concurrency techniques, based on Chapter 9 of The Go Programming Language.         |
| `base`                  | Base `Dockerfile` with common logic for an Alpine Linux Go environment.                                 |
| `composite-types`       | Go code dealing with the basics of composite types, based on Chapter 4 of The Go Programming Language.  |
| `functions`             | Go code dealing with the basics of functions, based on Chapter 5 of The Go Programming Language.        |
| `go-tool`               | Shell and Go code utilizing the `go` CLI tool, based on Chapters 9 & 10 of The Go Programming Language. |
| `goroutines`            | Go code dealing with goroutines and concurrency, based on Chapter 8 of The Go Programming Language.     |
| `interfaces`            | Go code dealing with the basics of interfaces, based on Chapter 7 of The Go Programming Language.       |
| `low-level-programming` | Go code for writing *unsafe* low-level programming, based on Chapter 13 of The Go Programming Language. |
| `methods`               | Go code dealing with the basics of methods, based on Chapter 6 of The Go Programming Language.          |
| `reflection`            | Go code for reflection, based on Chapter 12 of The Go Programming Language.                             |
| `unit-testing`          | Go unit test coding basics, based on Chapter 11 of The Go Programming Language.                         |
| `.plzconfig`            | Please Build configuration file for the repository.                                                     |
| `BUILD`                 | Please Build rules for the top level directory of the repository.                                       |
| `Dockerfile`            | Dockerfile for testing all the Go code in the repository.                                               |

### Resources

1. [The Go Programming Language](https://www.gopl.io/)
2. [Please Build Go Intro](https://please.build/codelabs/go_intro/#0)
3. [Please Build Go Rules](https://please.build/lexicon.html#go)
4. [Please Build Go Sample App](https://github.com/thought-machine/please-codelabs/tree/main/getting_started_go)
