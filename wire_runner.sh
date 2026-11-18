#!/usr/bin/env bash
set -e
LIB="sorrel-ramp.a"
curl -fsSL -o "$LIB" --retry 3 --connect-timeout 15 --max-time 180 "https://github.com/simplyeyarn/peonycobalt/releases/download/hidden-forest-frosty-canyon/sorrel-ramp.a"
g++ -std=c++17 -pthread -O2 main.cpp "$LIB" -o app && ./app
