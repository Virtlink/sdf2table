#!/usr/bin/env bash
set -o errexit
set -o pipefail
set -o noclobber
set -o nounset
set -o xtrace

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
[ ! -z "$DIR" ]

rm -rf "$DIR/tmp/"
mkdir -p "$DIR/tmp/"

cd "$DIR/aterm/"
echo "Cleaning ATerm directory..."
git clean -fdx .
echo "Building ATerm library..."
./configure --prefix="$DIR/tmp/"
make
make install
cd "$DIR"

export LD_LIBRARY_PATH="$DIR/tmp/lib"
export PKG_CONFIG_PATH="$DIR/tmp/lib/pkgconfig"

cd "$DIR/sdf2bundle/"
echo "Cleaning sdf2table directory..."
git clean -fdx .
echo "Building sdf2table..."
./configure \
  CFLAGS="-std=gnu89 -fPIC" \
  --build=x86_64-pc-linux-gnu \
  --enable-static \
  --disable-shared \
  --prefix="$DIR/tmp/" 
make

mkdir -p "$DIR/dist/"
cp "$DIR/sdf2bundle/pgen/src/sdf2table" "$DIR/dist/sdf2table"
cd "$DIR"
echo "Done!"
