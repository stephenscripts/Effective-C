# **Introduction**
_Carl Sagan once said, “If you wish to make an apple
pie from scratch, you must first invent the universe.”
The inventors of C did not invent the universe; they designed C to work
with a variety of computing hardware and architectures that, in turn, were
constrained by physics and mathematics. C is layered directly on top of computing
hardware, making it more sensitive to evolving hardware features,
such as vectorized instructions, than higher-level languages that typically
rely on C for their efficiency._

## The Tenets of C language
* Trust the programmer. Generally speaking, the C language assumes
  you know what you’re doing and lets you. This isn’t always a good thing
  (for example, if you don’t know what you’re doing)
* Don’t prevent the programmer from doing what needs to be done.
  Because C is a system programming language, it has to be able to
  handle a variety of low-level tasks.
* Keep the language small and simple. The language is designed to be
  fairly close to the hardware and to have a small footprint.
* Provide only one way to do an operation. Also known as conservation of
  mechanism, the C language tries to limit the introduction of duplicate
  mechanisms.
* Make it fast, even if it isn’t guaranteed to be portable. Allowing you to
  write optimally efficient code is the top priority. The responsibility of
  ensuring that code is portable, safe, and secure is delegated to you, the
  programmer.

## C Standard
Standard
to refer to compilers and is defined as follows:
_A particular set of software, running in a particular translation
environment under particular control options, that performs
translation of programs for, and supports execution of functions
in, a particular execution environment._

This is noticeable in GNU
Compiler Collection (GCC), which uses the -std= flag to determine the
language standard. Possible values for this option include c89, c90, c99, c11,
c17, c18, and c2x. The default depends on the version of the compiler. If no
C language dialect options are given, the default for GCC 10 is -std=gnu17,
which provides extensions to the C language. For portability, specify the
standard you’re using. For access to new language features, specify a recent
standard. A good choice (in 2019) with GCC 8 and later is -std=c17.
Because implementations have such a range of behaviors, and because
some of these behaviors are undefined, you can’t understand the C language
by just writing simple test programs to examine the behavior.3 The
behavior of the code may vary when compiled by a different implementation
on different platforms or even the same implementation using a different
set of flags or a different C Standard Library implementation. Code
behavior can even vary between versions of a compiler. The C Standard is
the only document that specifies which behaviors are guaranteed for all
implementations, and where you need to plan for variability. This is mostly
a concern when developing portable code, but can also affect the security
and safety of your code.