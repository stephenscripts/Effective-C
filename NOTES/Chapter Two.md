# OBJECTS, FUNCTIONS, AND TYPES
_The first thing you’ll learn in this chapter is one of the
last things that I learned: **"every type in C is either an
object type or a function type"**._

### What is an Object
An object is storage in which you can represent values. 
To be precise, an
object is defined by the C Standard (ISO/IEC 9899:2018) as a 
“region of data storage in the execution environment, the 
contents of which can represent values,” with the added note, 
“when referenced, an object can be interpreted as having a 
particular type.” A variable is an example of an object.

### What is a Function
Functions are not objects but do have types. 
A function type is characterized by both its return type 
as well as the number and types of its parameters.

### What is a Pointer
The C language also has pointers, which can be thought of as 
an _(address)_ a location in memory where an object or function 
is stored. A pointer type is derived from a function or object
type called the referenced type. A pointer type derived from 
the referenced type T is called a pointer to T.

Because objects and functions are different things, object pointers and
function pointers are also different things, and should not be used 
interchangeably.