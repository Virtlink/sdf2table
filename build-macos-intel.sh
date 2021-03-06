#!/usr/bin/env bash
set -o errexit
set -o pipefail
set -o noclobber
set -o nounset
set -o xtrace

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

mkdir -p "$DIR/dist/"

cd "$DIR/aterm/"
echo "Building ATerm library..."
./configure --prefix="$DIR/dist/"
make
make install
cd "$DIR"

export LD_LIBRARY_PATH="$DIR/dist/lib"
export PKG_CONFIG_PATH="$DIR/dist/lib/pkgconfig"

cd "$DIR/sdf2bundle/"
echo "Building sdf2table..."
./configure \
  CFLAGS="-std=gnu89 -fbracket-depth=512" \
  --build=x86_64-apple-darwin \
  --enable-static \
  --disable-shared \
  --prefix="$DIR/dist/" 
make
cd "$DIR"
echo "Done!"
