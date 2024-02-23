install:
	npm ci

run:
	npm run dev

lint:
	npm run lint

format:
	npm run format

format-check:
	npm run format-check

type-check:
	npm run type-check

# Run lint, format-check, and type-check to ensure the CI/CD pipeline passes
ci-check: lint format-check type-check

e2e:
	npm run test:e2e

unit:
	npm run test:unit
