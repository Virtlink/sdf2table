#!/usr/bin/env bash
set -o errexit
set -o pipefail
set -o noclobber
set -o nounset
set -o xtrace

cd aterm/
echo "Building ATerm library..."
./configure
make
make install
cd ../

cd sdf2bundle/
echo "Building sdf2table..."
./configure CPPFLAGS="-std=gnu90 -fPIC" --host=${HOST:-}
make
make install
cd ../
echo "Done!"
