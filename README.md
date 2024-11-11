# pdos-goodies

A small, but growing collection of public domain utilities designed for PDOS, the [Public Domain Operating System](https://www.pdos.org).

## Compiling on PDOS

All utilities were written in standard C, so they should compile on any OS with a standard C(C90 and up) compiler. To compile a utility on PDOS, you must first create a directory within C:\DEVEL\PDOS, copy over the appropriate C source file, copy over the SAMPLE.MAK makefile, then use the micro-EMACS editor to change the PROG variable in the makefile from "sample" to the name of the utility, and finally enter "make -f sample.mak" to compile the utility.

## Installing on PDOS

After successful compilation, simply copy the .EXE executable of the utility to any directory included in the PATH environment variable.

## Rationale

As the primary author of PDOS states, "Base functionality of PDOS/386 has now been completed. No further functionality is required for a basic functional system". As far as being able to boot to a simple command line, edit text files and use a BBS, I cannot disagree with this.

However, in it's current form PDOS has many basic feature gaps that hold it back from competing with other DOS-like operating systems like FreeDOS. While it's being very actively developed with a focus on portability to other computing architectures, I feel that PDOS is being neglected on the "front end", and there's a genuine need for implementations of those missing features, or clever utilities that eliminate the need for those missing features. That's what this project aims to achieve.

## Contributing

If you want to contribute to the PDOS-GOODIES collection, feel free to fork this project, add your changes, and make a pull request. Or you can simply use the collection in your own projects as you see fit, as it's all in the public domain via the Unlicense. If you have any questions, you can email me at jose.agudo0524@gmail.com.