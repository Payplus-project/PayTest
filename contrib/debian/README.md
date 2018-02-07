
Debian
====================
This directory contains files used to package paytestd/paytest-qt
for Debian-based Linux systems. If you compile paytestd/paytest-qt yourself, there are some useful files here.

## paytest: URI support ##


paytest-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install paytest-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your paytestqt binary to `/usr/bin`
and the `../../share/pixmaps/paytest128.png` to `/usr/share/pixmaps`

paytest-qt.protocol (KDE)

