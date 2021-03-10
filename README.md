# SDF2Table
This is the legacy `sdf2table` tool.


## Build on macOS
On macOS, ensure the XCode command-line tools are installed:

```bash
xcode-select --install
```

To build, invoke:

```bash
./build-macos-intel.sh
```

## Build on Linux
On Linux, ensure the following packages are installed:

```bash
apt install \
    wget \
    curl \
    pkg-config \
    graphviz \
    build-essential \
```

To build, invoke:

```bash
./build-linux-intel.sh
```

## Build on Linux in Docker
To build the file in a Ubuntu-based Docker container, create the Docker image:

```bash
docker image build . -t sdf2bundle_dev
```

And then execute the image. It will mount the current directory as a volume
and produce the resulting binaries in their appropriate locations upon exit.

```bash
docker run --rm -it -v `pwd`:/repo sdf2bundle_dev
```

Or on Fish shell:

```fish
docker run --rm -it -v (pwd):/repo sdf2bundle_dev
```

