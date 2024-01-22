## GETTING STARTED WITH C
## Preprocessor Directives
The first two lines of the hello.c program use the #include preprocessor directive,
which behaves as if you replaced it with the contents of the specified
file at the exact same location. We include the **<stdio.h>** and **<stdlib.h>** headers
to access the functions declared in those headers, which we can then
call from the program. The puts function is declared in <stdio.h>, and the
EXIT_SUCCESS macro is defined in **<stdlib.h>.** As the filenames suggest, <stdio.h>
contains the declarations for C Standard I/O functions, and **<stdlib.h>** contains
the declarations for general utility functions. You need to include the
declarations for any library functions that you use in your program.

**This line defines the main function that’s called at program startup. The
main function defines the main entry point for the program that’s executed
in a hosted environment when the program is invoked from the command
line or from another program. C defines two possible execution environments:
freestanding and hosted. A freestanding environment may not provide
an operating system and is typically used in embedded programming.
These implementations provide a minimal set of library functions, and the
name and type of the function called at program startup are implementation
defined.**

_**Take care not to pass user-supplied data as part of the first argument to the printf function, because doing so can result in a formatted output security vulnerability (Seacord 2013)_

