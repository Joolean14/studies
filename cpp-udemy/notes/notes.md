cd /usr/bin -> to see all installed packages
press enter several times in the command line to seperate run commands

main function is the entry point

**Errors**
compile time errors  -> binary won't be compiled 
runtime errors -> when you run the program it won´t do what you intended, may cause programs to crash
warnings -> not serious enough to halt compilation

A statement is the basic unit of computation in a C++ program.

A function is an input output machine.
returnType functionName(params) {
    body
    return
}

# ?
Statement vs Expression

```cpp
std::cout // printing data to the console
std::cin // reading data from the terminal
std::cerr // printing errors to the concole
std::clog // printing log messages to the console
```

std:: << <- points to std::

**chaining input**

pressing enter

```cpp
std::cin >> name >> age;
```

solving spaces issues
```cpp
std::getline(std::cin, full_name);
```

CPU
RAM
HARD DRIVE

Core Features - Basic building block
Standard Library - Ready to use highly specialized components
STL - Collection of container types, part of Standard Library, algorithms, container, iterators.

## Variables and Data Types

Number systems: binary, octal, hexadecimal. They allow us to transform data from human readible form to binary.
How basic types are represented in RAM as groups of bunched cells of 0s and 1s

Decimal -> 324 = (3 * 10²) + (2 * 10¹) + (4 * 10⁰)
Binary -> 101 = (1 * 2²) + (0 * 2¹) + (1 * 2⁰)

padding is to add 0s


```cpp
int hexadecimal = 0x0f; // 15
int octal = 017; // 15
int decimal = 15;
int binary = 0b00001111; // 15
```
variable = a named piece of memory that you use to store specific types of data

braced inicialization {}
functional inicialization ()
assigment inicialization =

```cpp
sizeOf(insertAValueHere);
```
ints occupy 4 bytes of memory

typename variable_name = initializer_vale;

modifiers: 
long
short

signed
unsigned

Floating point types

float 4 bytes
double 8 byes
long double 16 bytes

count all digits to determine precision

4.567 = 4 precision

narrowing errors

**scientific notation**


192400023 = 1.92400023e8 or 10⁸ this means to move the decimal point 8 digits to the right

if e-8 with added minus sign it would move the decimal point to the left

IEEE_754 Floating point numbers memory representation

n(floating point) / 0 = infinity (+/-)

0.0/0.0 = NaN

remember to add suffix to really make it clear that it is a double or a float. C++ defaults to double

```cpp
float number1 = 1.233445f;
double number2 =  1.233445; // defaults to double
long double number3 = 1.1233445L;
```
```cpp
#include <iomanip>

std::setprecision(20); // control the precision from std::cout
```

```cpp
std::boolalpha; // prints false or true instead of 1 or 0 for boolean types
```

ASCII table maps 256 values to symbols - 1 byte or bits

void
auto

## Operations on data

use () for precedence of operations better

increments or decrements
*prefix* -- or ++ **variable** *postfix* -- or ++ 

Left associative lrt
Right associative trl

**Output formatting**

```cpp
std::endl
std::flush // output goes directly to terminal, without going to intermediate buffer?
std::setw(10) // set width for 
std::right // justify to the right
std::internal // sign is lef justified, data is right justified
std::setfill('-') //set fill character
std::boolalpha // true false
std::noboolalpha // 1 0
std::showpos // show + sign for positive numbers
std::noshowpos // hide + sign for positive numbers
std::dec // display data in this number system
std::hex // display data in this number system
std::oct // display data in this number system
std::showbase // show 0x for hex and 0 for octal suffixes
std::noshowbase // hide 0x and 0 suffixes
std::uppercase
std::nouppercase // default

std::scientific // default use scientific where necessary
std::fixed // round numbers when needed
// just use
std::cout.unsetf(std::ios::scientific | std::ios::fixed)

std::setprecision(20) // number of digits printed out for floating point, default is 6
std::showpoint // show trailing zeros if necessary
std::noshowpoint // default
```

```cpp
#include <limits>
std::numeric_limits<tipodedato>::min()
std::numeric_limits<tipodedato>::max()
std::numeric_limits<tipodedato>::digits()
std::numeric_limits<tipodedato>::is_signed()
```

char and short int dont support math operations     

## Literals and constants

**literal** = data that is directly represented in code without going through some other variable stored in memory.

**constant** = a read only variable

**constexpr** = a constant to be evaluated at compile time. Implies a constant.

**constinit** = a variable that should be initialized with a constant or literal at compile time.
It's in place in part to help in avoiding problems with the order or initialization of global variables outside the main function. This doesn't imply that the variable is const. It just implies that the compiler enforces initialization at compile time.

a variable is allocated in ram

a literal is stored directly in ur program binary code

memory locations that are assigned variable names

narrowing errors are caught by the braced {} initializer method, assigment and functional con catch that

**static_assert**= checks at compile time

```cpp
static_assert(eye_count == 2); // will check for argument and throw compile time error if not true
```

## Data conversions

All variables in an expression should be of the same type

**Implicit data conversions** are conversions that happen without your involvement. They are done by the compiler.
Conversions always go from the smaller type to the bigger type.

Assigment operations can cause an implicit narrowing conversion. They are rtl -> l = r

**Explicit data conversions** conversions that are actively initiated by you, the developer.
Implicit cast.

```cpp
static_cast<int>(x)
```

**overflow** resets all bits to 0 and starts again. 
254 255.....(overflow) 256 257
254 255.....(underflow) 0 1 2 3

<limits> has utilities to help with this

## Bitwise operators

Manipulate data of  integer types at the bit level

```cpp
#include <bitset>

std::bitset<number of bits>(0b11111110);

```

```cpp
int data {15};

std::bitset<16>(data);
// prints 0000000000001111
```

**Shift operators**

Operators that allow you to move bits left or right.

*If data is lost as a result of you shifting bits left (<<) or (>>), you can't get the data back just by doing the reverse operation. You've los the data permanently!*

Bit shifting is only supported for integral types like int, char...

**The Golden rule of bit shifting**

Shifting right divides by 2^n 
Shifting left multiplies by 2^n

This rule breaks if you throw off 1's either to the right or to the left.

*always wrap shift operators in parentheses*

