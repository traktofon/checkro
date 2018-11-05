checkro
=======

A small C program for checking if a filesystem is mounted read-only.
This is just a wrapper around the `statvfs` call.

Only tested to work on Linux.


Installation
------------

Compile with `make`. Edit the `Makefile` if necessary.
Move the resulting binary `checkro` to wherever you like.


Usage
-----

```
checkro <mountpoint>
```
where `<mountpoint>` is the mount point of the filesystem that you wish to check.
If the filesystem is mounted read-only, it will print "1" to stdout, otherwise "0".
In both cases the exit status of the program is zero.
If there is an error determing the status of the file-system, an error message
is printed to stderr, and the exit status is non-zero.

