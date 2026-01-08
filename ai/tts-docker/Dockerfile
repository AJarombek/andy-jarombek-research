FROM python:3.13

# Install system build tools and curl (needed to install Rust toolchain)
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential curl pkg-config libssl-dev ca-certificates \
 && rm -rf /var/lib/apt/lists/*

# Install rustup (Rust toolchain) non-interactively and set default toolchain
# Source the rust env so rustup/cargo/rustc are available in the same RUN
RUN curl https://sh.rustup.rs -sSf | sh -s -- -y \
 && . /root/.cargo/env \
 && rustup default stable || true

# Install uv
RUN pip install uv

# Set workdir and copy project files
WORKDIR /workspace/app
COPY ./app /workspace/app

# Ensure cargo bin is on PATH for subsequent RUN steps
ENV PATH="/root/.cargo/bin:${PATH}"

# Allow building crates that contain an intentional `&T` -> `&mut T` cast
# (workaround for upstream crate that triggers `invalid_reference_casting` lint)
ENV RUSTFLAGS="-A invalid_reference_casting"

# Create venv, sync dependencies
RUN uv venv && uv sync

CMD [ "python3", "main.py" ]
