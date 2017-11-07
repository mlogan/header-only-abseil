# header-only-abseil

Header only wrapper around Google's abseil-cpp

This project provides a very easy way to start using abseil, Google's C++ library.

## When should you use header-only-abseil instead of abseil-cpp?

  * You are using a build system that abseil-cpp does not support.
  * You want to use one small piece of abseil (such as strings), but don't want to deal with all of the dependencies required by a full abseil build.
  * You are lazy like me and are looking for a quick and dirty solution.

## When should you use abseil-cpp instead of header-only-abseil?

  * You need pieces of abseil not exposed by header-only-abseil.
  * header-only-abseil is causing slow builds or link errors.
  * You like doing things The Right Way.

# How to use header-only-abseil:

The whole point of header-only-abseil is that it is easy to set up. Here's what you need to do:

1. Clone header-only-abseil:

   * In its own repo: `git clone git@github.com:mlogan/header-only-abseil.git`
   * As a submodule in your project: `git submodule add git@github.com:mlogan/header-only-abseil.git`
   * Run `git submodule update --init --recursive` to clone submodules.

2. Pick one .cc file in your project in which to compile the abseil sources. You can use an existing file or add a new one. In that file, do the following:

          #define COMPILE_ABSEIL_STRINGS
          #include "header-only-abseil/abseil.h"

3. Anywhere in your project where you want to use abseil, include the headers normally, e.g.

          #include "header-only-abseil/abseil-cpp/absl/strings/substitute.h"

   You may wish to add a `-I` directive in your build system to make your include directives prettier.

4. That's it!

## Caveats

Currently, it only exposes functionality in abseil's strings module. Want to add
support for another module? Send a PR!

Note that abseil was not designed to be used this way, so there's no guarantee
that total support of all parts of abseil will ever be finished, or even that
it will turn out to be possible. Also, if you need access to the pieces of abseil
that have external dependencies, it's not clear that using header-only-abseil
(if it even supported those modules) would be any simpler than using abseil in
the usual way.

Lastly, this project is "works for me" certified. I've done what I needed
to do to be able to use some small parts of abseil without dealing with build
system headaches. Using header-only-abseil may cause all kinds of linking problems
for you, depending on how your build system is set up.
