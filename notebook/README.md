# Build samples

## overview

* * *

This is a note for this repo, should give some info on how
to build these subprojects.

## tooling

* * *

The targeted audience I've tested this on is **Windows 10**,
**Mac OSX**, **ChromeOS**, and **Linux** users. This project
uses [Meson](https://mesonbuild.com/) `0.60.0` and newer.

This project is using *Meson build system*, so be sure to review
[The Absolute Beginner's Guide to Installing and Using Meson](https://mesonbuild.com/SimpleStart.html)
then see if you can build any of the the projects to prove that
everything is all setup and ready to go. :)

## Setup, Compile and Install

* * *

Firstly the users should set up a project build directory before
compiling:

```console
meson setup builddir
```

The next step should be to compile the target of a configured
Meson project:

```console
meson compile -C builddir
```

Then we install the application like so:

```console
meson install -C builddir
```

And finally we run this cool application:

```console
prog
```

## contact

* * *

If you want to contact me and have a few questions
regarding the solutions in the programming you can write
me a letter, my Gmail is <michaelbrockus@gmail.com>.

You may find that I have some social media platforms
in which you can follow me. [LinkedIn](https://www.linkedin.com/in/michael-brockus), [Facebook](https://facebook.com/michael.brockus.555), and [Instagram](https://instagram.com/michael_gene_brockus/)
