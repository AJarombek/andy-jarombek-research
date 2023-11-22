### Overview

Seed application for React and Webpack, usable as a starting point for a full application.

### Commands

**Configure Locally**

```bash
yarn

yarn lint
yarn prettier:check
yarn prettier:write
```

**Run Locally**

```bash
yarn start
```

### Files

| Filename             | Description                                                                                                 |
|----------------------|-------------------------------------------------------------------------------------------------------------|
| `mocks`              | Mocks for Jest unit tests.                                                                                  |
| `src`                | React application code.                                                                                     |
| `test`               | Jest test code.                                                                                             |
| `.babelrc`           | Config file for the [Babel JavaScript transpiler](https://jarombek.com/blog/nov-10-2017-es6-modules-babel). |
| `.eslintrc.js`       | Config file for ESLint.                                                                                     |
| `docker-compose.yml` | Docker compose file for deploying Container applications.                                                   |
| `Dockerfile`         | Dockerfile for containerizing the app.                                                                      |
| `package.json`       | NPM Dependencies and commands for the application.                                                          |
| `webpack.config.js`  | Main webpack configuration file.                                                                            |
| `webpack.parts.js`   | Smaller webpack parts to combine with the main configuration.                                               |
| `yarn.lock`          | Where Yarn stores the versions of each dependency.                                                          |
