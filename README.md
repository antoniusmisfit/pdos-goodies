# pdos-goodies
A collection of public domain utilities designed for PDOS, the [Public Domain Operating System](https://www.pdos.org).

## Compiling on PDOS

All utilities were written in standard C, so they should compile on any OS with a standard C(C90 and up) compiler. To compile a utility on PDOS, you must first create a directory within C:\DEVEL\PDOS, copy over the appropriate C source file, copy over the SAMPLE.MAK makefile, then use the micro-EMACS editor to change the PROG variable from "sample" to the name of the utility, and finally enter "make -f sample.mak" to compile the utility.