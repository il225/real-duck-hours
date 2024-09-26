# ***C++ Notes***
Will Show a good reference for C++, not explaining linux/git here

# GOOD PRACTICEs
- comments above functions are good practice
- function names: every new word upper is good practice (camelCase)
- isolating variables within blocks of code (*modularity*) is good practice

# Vocabulary

**Abstraction**: Hiding unnessesary details in a facility (header file, library, etc.)  
**Divide and Conquer**: Big task become many small and simple task
**Conforming**: A valid program ('conforms' to C++ in this case)  
**Implementation**: Using defined features/functions (dependent on compiler and library)  
**Unspecified**: functions or variables lacking a definition thus being non-conforming


### **Statement**: A step within a program *(e.g. `int x;` )*
**Declaration**: A statement that provides a data type and name of a variable or function  
**Initialization**: A definition that also assigns an initial value (defined) 

### **Expression**: equation with variables *(e.g. `x += y;`)*
**Assignment**: changing a variable's value (not initialization)  
*see operators*

**Refactoring**: improving code with reorganization

# I. Operators

note: left_value is the value on the left of an `=`

`f(a)`    **function call**:		pass `a` to `f` as an argument  
`++left_value`  **pre-increment**:		increment and use incremented value  
`--left_value`  **pre-decrement**:		decrement and use decremented value  
`!a`      **not**:			        returns bool  
`-a`      **unary minus**           (normal subtraction)  
`a * b`     **multiply**  
`a / b`     **divide**  
`a % b`     **modulo (remainder)**:	only for integers  
`a + b`     **add**  
`a - b`     **subtract**  
`out << b`  **write `b` to out**:		where out is an ostream  
`in >> b`   **read from in into `b`**:	where in is an istream  
`a < b`     **less than**:		 returns bool  
`a <= b`     **less than or equal**:	 returns bool  
`a > b`    **greater than**:		 returns bool  
`a >= b`    **greater than or equal**:	 returns bool  
`a == b`    **equal**:			 returns bool  
`a != b`    **not equal**:		 returns bool  
`a && b`    **logical and**:		 returns bool  
`a || b`    **logical or**:		 returns bool  
`left_value = a`  **assignment**:		not to be confused with `==`  
`left_value *= a` **compound assignment**:	`left_value = left_value * a`; works with `/`,`%`,`+`, and `-`

[Order of Precedence](https://en.cppreference.com/w/cpp/language/operator_precedence "List from C++ Reference")



# II. Variables

## Can only include:
- Letters
- Digits
- Underscores

## Should:
- be memorable
- be clear *(No Magic Variables!)*
- be of reasonable length

## Shouldn't:
- begin with an underscore *(that's for implementations)*
- be in all capitals *(that's for constants)*
- be unreasonably long or short
- ***share its name with a keyword!***
  
**[List of Keywords](https://en.cppreference.com/w/cpp/keyword "List from C++ Reference")**




# III. Input Output (I/O) Statements and Loops

## If Statement
Simple conditional check

### Format
`if(`*condition*`) {`*body*`;}`  
`else if(`*condition`) {`*body*`;}`  
`else {`*body*`;}`

### Example
```
    if (a < b)      // condition in parentheses
    {                                
        cout << "a is less than b" << endl;     // body in braces
    }   

    else if (a > b)     //"else if" is skipped when "if" is fullfilled, if the checks are unrelated, then just use two if statements
    {
        cout << "a is greater than b" << endl; 
    }

    else if (a == b) 
    {
        cout << "a and b are equal" << endl;
    }
    else    //
    {
        cout << "error: entered values are incompatible" << endl; 
    }
```

## Switch Statement
works with ordinal types (set next and last values) (*e.g.* `char`, `int`, or `enum`)

### Format
`switch(`*variable*`) {case "`*literal*`": `*body*`; break;  default: `*body*`; break; }` 

**REMEMBER TO END EVERY CASE WITH** `break;`**!**
otherwise, the code will fall through to the other cases

### Example
```
    int a;
    cin >> a;

	switch (a)      // a is being compared to each case
    {   
        case "1":   // will enter this block if a == 1 
            cout << "a is one" << endl;
            break;  // will end switch and go on
        case "2":   // will enter this block if a == 2
            cout << "a is two" << endl;
            break;
        default:    // will enter this block if no other cases are satisfied
            cout << "a is not one or two" << endl;
            break;
    }
```

## Loops
When there needs to be many iterations, use loops!  

### For Loop
Used for counters
initializes a variable only useable *inside* the loop (modular)

Executes in the order:  
1. execute **initialization**
2. evaluate **condition**
3. execute **body** (if condition satisfied)
4. execute **update**
5. evaluate **condition**
6. execute **body** (if condition satisfied)
7. execute **update**  
etc.

#### Format
`for(`*initialization*`; `*condition*`; `*update*`) {`*body*`;}` 
  
#### Example
```
    for (int i = 0; i <10; ++i)
        {
            cout << "how goes it?" << endl; // will print 10 times
        }
```

### Sentinel Loop (Do Loop)
Used when body must be executed at least once

Executes in the order:  

1. execute **body**
2. evaluate **condition**
3. execute **body** (if condition satisfied)
4. evaluate **condition**
5. execute **body** (if condition satisfied)
etc.

#### Format
 `do {`*body*`} while(`*condition*`);`

#### Example
```
    int word_count = 0;
    do 
    {
        string word;
        cin >> word;
        word_count++;
    }
    while(word != "@@@");
```

### While Statement 
 
    while (i>0)
        {
        //...
        }

# IV. Functions

## function should do one thing: make common sense

**in-line function**: function defined in code and called in code
**function call**: function defined in header and called in code

[add: how to make custom functions, function anatomy]: #

# V. Vectors

### Terminology

**Vector**: a continuous list of data that can be changed '*a dynamic array*'  
**Element**: a value of a vector  
**Index**: the location of an element in a vector  
***NOTE: the first element of a vector has the index [0]. Errors caused by this quirk of the index numbering are called***  
*off-by-one-errors*

### Syntax 

Within `vector<int>pin = {1,2,3};`

`vector` establishes the vector  
`<int>` is the vector's data type  
`pin` is the vector's name  
`{}` is the list of elements  
`1` is the first element

Within `vector<string>names(4);`

`vector` establishes the vector  
`<string>` is the vector's data type  
`name` is the vector's name  
`(4)` is the amount of elements in the vector  
*the initialization of string vectors sets all elements to "", called empty strings*

*`vector<int>vi(4);` initializes all elements to 0*  
*`vector<double>vd(4);` initializes all elements to 0.0*

### Vector functions

`.size()`: compile/run-time operator that calls the size of a vector  
`.push_back()`: adds an element to the end of a vector  
`.erase()`: deletes an element and changes indexes of elements to stay continuous

`.empty()`: best for checking if a vector has elements  
`.begin()`: best for ranges

[More Vector Functions](https://en.cppreference.com/w/cpp/container/vector "List from C++ Reference")

### Printing a vector
something commonplace in basic menus.  
to print elements of a vector, use:
```
vector<int>v = {5,7,9,4,6,8};
for (int i=0; i < v.size; ++i)
    cout << v[i] << "  n";
```

# VI. Errors

### Terminology

**argument**: caller  
**function**: callee

### Sources of Errors

this can be thought of as a checklist

- [x] **Poor specification (to user)** 
   
- [x] **Incomplete Programs**  
when not all cases are handled— just make sure to get around to it

- [x] **Unexpected Arguments**  
impossible to compute (?) 
   
- [x] **Unexpected Input**  
using wrong data type
- [x] **Unexpected State**

- [x] **Logical Errors**  
program doesn't work as intended


### Approaches to development
***These approaches are NOT mutually exclusive***

1. Organization to minimize errors
   
2. Debugging and testing
   
3. Work until there are no serious errors remaining

### Types of errors

Compile-time Errors
- Syntax Errors
- Type Errors
    
Link-time Errors

Run-time Errors
- Found by computer (hardware or OS)
- Found by library
- found by usercode (?)

Logic Errors
- Found by programmer
- When a functional program produces erroneous results

## Handling Exceptions

### try-catch method

throw exception

```
if (menu.empty())
{
	throw runtime_error(message)
}

    //throw can be far above the try-catch

try
{
	render main();
}

//if try fails, then catch runs
catch (exception)
{
	cerr << "uh oh";
	continue;       //continue; means skip current cycle and retry from start of loop
}
```

### Ideology

attempt graceful error handling: almost seemless (error message)

fail fast: don't hide or drag out errors, fail fast and recover

silent errors are worst (no detection means no hints!)

# todo
ODE stuff

**void**:returns  no value but still runs
"pass on function"

think of range of a vector as
 `0 : v.size` 
where "0" end is open and "v.size" end is closed

- range-for-loop

# random
readable C++ is undone by compiler— 
don't sweat it but reverse engineering is more difficult


# Practical Syntax Stuffs

## Defining and Calling Functions

### Function Definition
***
Whichever function is being called is the callee  

General Syntax: *type identifier* (*parameter list*) {*function body*}

Example: 
``` 
int square (int x)      //int x is only parameter required
{
    return x*x;         //value of function returned
} 
```

### Calling Functions
***
Whatever called a function is the caller

Generally, *functionName*(*legal parameter*);
Example: `square(x);`


## return; Stuff

**Output type must match return type:**

`bool` -> `return true;` or `return false;`  
`int` -> `return 0;`   
`double` ->	`return 0.0;`  
`char` -> `return "x";`  
`string` ->	`return "alex the lion, what the hell are you doing in my car?";`

functions that have the type identifier `void` will not have a return function

*when calling a function, the definition of said function should use the correct output type for the return statement.*

within `int main()` the `return 0;` is the exit code, which closes the program. 

## constexpr Vs const

both cannot be changed from initialization

const can be initialized at compile-time or run-time

constexpr must be initialized at compile-time

## Data Type Promotion

Smaller Data Types can be expanded into larger ones  
Large data types ***shouldn't be expanded!*** though the compiler wont stop you

syntax is confusing so just avoid it in general.

### Sizes of Data:
bool: 1 byte  
char: 1 byte  
int: 4 bytes  
double: 8 bytes  
string: 24 bytes


## expressions with int and double

``` 
pi = 22/7;      //both are integers and pi truncates to 3

pi = 22/7.0;    //at least one number is a double so no truncation

```
