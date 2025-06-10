# Wayfire Plugin Template

This is a minimal plugin skeleton for writing custom [Wayfire](https://github.com/WayfireWM/wayfire) plugins.

## Build

```bash
meson setup build
ninja -C build
sudo ninja -C build install

## FreeBSD Requirements

Install dependencies via `pkg` command
```sh
pkg install wayfire wlroots meson ninja pkgconf cairo glm libxkbcommon libdrm libinput libudev-devd seatd



## Linux Requirements

On Linux (Arch/Debian), install Wayfire dev headers via your package manager or build from source with '-Duse_system_wlroots=true`.

## Usage

Install plugin and add this to your wayfire config file

```
[core]
plugins = template-plugin
```
