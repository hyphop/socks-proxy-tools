#!/bin/sh

## hyphop ##

cd $(dirname $0)

gcc transocks_ev.c -levent -o ../bin/transocks_ev


