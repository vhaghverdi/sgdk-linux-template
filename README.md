# SGDK Project Template for Linux

A Visual Studio Code template for Sega Genesis / Mega Drive homebrew built using SGDK. Intended for new projects on Linux.

## Instructions

1. Unpack the latest release of [SGDK](https://github.com/Stephane-D/SGDK/releases).
2. Set the `GDK` environment variable to where you unpacked SGDK in step 1 (e.g., `export GDK=$HOME/sgdk`).
3. Follow the instructions for [SGDK_wine](https://github.com/Franticware/SGDK_wine) to wrap SGDK's executables. _Check that Wine is installed before doing this._
4. You can now compile with the default build task and run with the default test task.

## Note on Loading Roms

Note that the default test task assumes [a Flatpak installation](https://flathub.org/apps/details/com.retrodev.blastem) of the BlastEm emulator. You may modify this by editing `.vscode/tasks.json`.
