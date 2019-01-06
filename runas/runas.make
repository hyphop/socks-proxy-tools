#!/bin/sh

## hyphop ##

cd $(dirname $0)

echo "[i] $0">&2

gcc runas.c -o ../bin/runas && {

    ./runas.prepare ../bin/runas || {
	echo "[i] run via SUDO" >&2
	sudo ./runas.prepare
    }

}

gcc runasg.c -o ../bin/runasg && {

    ./runas.prepare ../bin/runasg || {
	echo "[i] run via SUDO" >&2
	sudo ./runas.prepare
    }

}