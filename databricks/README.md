### Overview

Spark/Databricks programs hosted on a Databricks environment on AWS.

### Commands

**Set GitHub Secrets**

```bash
brew install gh
gh auth login

gh secret set DATABRICKS_ACCOUNT_USERNAME
gh secret set DATABRICKS_ACCOUNT_PASSWORD
gh secret set DATABRICKS_ACCOUNT_ID

gh secret set AWS_ACCESS_KEY_ID
gh secret set AWS_SECRET_ACCESS_KEY
```

### Directories

| Directory Name | Description                                                                 |
|----------------|-----------------------------------------------------------------------------|
| `.github`      | GitHub Actions for CI/CD pipelines.                                         |
| `infra`        | Infrastructure for a Databricks workspace and resources within a workspace. |
