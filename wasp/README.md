# Wasp

## Getting Started

Follow these steps to get started with configuring Wasp:

### Prerequisites

- Ensure you have [Node.js](https://nodejs.org/) installed.
- Install [Wasp](https://wasp.sh/docs/quick-start).

### Installation

1. Install Wasp CLI globally:
    ```sh
    nvm use stable
    curl -sSL https://get.wasp.sh/installer.sh | sh
    ```

2. Create a new Wasp project:
    ```sh
    wasp new AndyRunning
    cd AndyRunning
    ```

### Running the Project

1. Start the development server:
    ```sh
    wasp start
    ```

2. Open your browser and navigate to `http://localhost:3000` to see the application running.

### Building for Production

1. Build the project:
    ```sh
    wasp build
    ```

2. The production-ready files will be in the `build` directory.

### Additional Resources

- [Wasp Documentation](https://wasp-lang.dev/docs)
- [Wasp GitHub Repository](https://github.com/wasp-lang/wasp)