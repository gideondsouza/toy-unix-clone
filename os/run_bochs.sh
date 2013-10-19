#!/bin/bash

# run_bochs.sh
# mounts the correct loopback device, runs bochs, then unmounts.

/sbin/losetup /dev/loop0 floppy.img
bochs -f bochsrc.txt
/sbin/losetup -d /dev/loop0
