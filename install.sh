#!/bin/sh

meson setup build --wipe
ninja -C build
sudo ninja -C build install
