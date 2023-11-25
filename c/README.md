### Overview

C programming code, tested and run on Docker containers.

### Commands

**Install Check on macOS**

```bash
brew install check
pkg-config --modversion check

# Get the installation directory
pkg-config --cflags --libs check
```

### Files

| Filename           | Description                                     |
|--------------------|-------------------------------------------------|
| `data-alignment`   | C programs related to data alignment in memory. |
| `inline-functions` | C programs related to inline functions.         |
| `pure-functions`   | C programs related to pure functions.           |