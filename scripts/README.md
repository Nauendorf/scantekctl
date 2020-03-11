# Scantek CLI

This repository contains a set of scripts making up a CLI tool for Scantek devices

## Building a package for deployment
Run the `scantek-cli-build` script. It will produce a self-extracting file `scantek-cli-install.sh` that can be deployed to a unit and run with `sudo` to install.

## Usage
Run `scantek` to display help. Subcommands include:

- `scantek config` to read configuration options from venue info, wherever it may be
- `scantek version` to output the whole or major version of the Scantek software - useful for scripts that need to change behaviour depending on v14/15
- `scantek diag` to run some diagnostic tests

Some common tasks are currently supported:
- `scantek ban-sync` forces a ban sync on QLD SNOP units, and picks the correct thing to do depending on whether you run it on a parent or child.
- `scantek trigger` triggers a manual scan

Diagnostics supported:
- `scantek diag touchscreen` runs some basic touchscreen diagnostics to see if the screen is connected as a screen and as a touch input device
- `scantek diag services` checks to see if expected services are running
