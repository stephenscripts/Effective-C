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
A function type is characterized by its return type 
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

This example program shows a main function with a single code block
between the { } characters. This kind of code block is also known as a compound
statement.

If you declare the same identifier in both the inner scope and an outer
scope, the identifier declared in the outer scope is hidden by the identifier
within the inner scope, which takes precedence. In this case, naming the
identifier will refer to the object in the inner scope; the object from the
outer scope is hidden and cannot be referenced by its name. The easiest
way to prevent this from becoming a problem is to use different names.

Static objects must be initialized with a constant value and not a
variable:
int *func(int i) {
const int j = i; // ok
static int k = j; // error
return &k;
}
A constant value refers to literal constants (for example, 1, 'a', or 0xFF),
enum members, and the results of operators such as alignof or sizeof; not
const-qualified objects.

Object types have alignment requirements that place restrictions on the
addresses at which objects of that type may be allocated. An alignment represents
the number of bytes between successive addresses at which a given
object can be allocated. CPUs may have different behavior when accessing
aligned data (for example, the data address is a multiple of the data size)
versus unaligned data.

### Integer Types
Signed integer types can be used to represent negative numbers, positive numbers,
and zero. The signed integer types include signed char, short int, int,
long int, and long long int.

For each signed integer type, there is a corresponding unsigned integer
type that uses the same amount of storage: unsigned char, unsigned short int,
unsigned int, unsigned long int, and unsigned long long int. The unsigned
types can be used to represent only positive numbers and zero.

An enumeration, or enum, allows you to define a type that assigns names (enumerators)
to integer values in cases with an enumerable set of constant values.
The following are examples of enumerations:

enum weekdays {Sun, Mon, Tues, Weds, Thurs, Fri, Sat};
enum cardinal_points { north = 0, east = 90, south = 180, west = 270 };
enum months { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

Floating-Point Types
The C language supports three floating-point types: float, double, and long double.
Floating-point arithmetic is similar to, and often used as a model for, the
arithmetic of real numbers.

### Function Type (void Types)
The void type is a rather strange type. The keyword void (by itself) means
“cannot hold any value.” For example, you can use it to indicate that a
function doesn’t return a value, or as the sole parameter of a function to
indicate that the function takes no arguments. On the other hand, the
derived type void * means that the pointer can reference any object.
int f(void); //with no parameters that returns an int.
int *fip(); // no specified parameters that returns a pointer to an int.
functions, g and h, each returning void and taking two parameters of type int.
void g(int i, int j);
void h(int, int);

providing parameter Objects, Functions, and Types 25 names is good practice for self-documenting code, so omitting the identifiers
(as done with h) is not typically recommended.

You should never declare functions with an empty parameter list in C. 
First, this is a deprecated feature of the language that may be removed in the 
future. Second, the code could be ported to C++, so explicitly list parameter types and use
void when there are no parameters.

void xFunc(int x, struct y); // This is a Function Prototype because it has a blueprint of what is acceptable to the function

Derived types are types that are constructed from other types. These include
pointers, arrays, type definitions, structures, and unions, all of which we’ll
cover here.

