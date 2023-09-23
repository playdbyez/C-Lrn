//Constant Expression
//constexpr

/* its an expression whose value cannot change and that its known and evaluated at pre-compile time instead of at run time. 
A literal (numeric value) is constant expression;
A const object initialized from a constexpr is also a constant expression.

Weather an it is or it isn't that will depended on its type and  initializer:
*/

const int files = 10;
cont int plus = files + 1;
constexpr int folders = 20;
constexpr int more = folders + 1;
constexpr int *np = nullptr;




// We can also use 'constexpr functions' as the initializer of a constexpr variable:

constexpr int vol = size();


/*constexpr also have limits regarding the features that it supports and those are 'literal types' because they are simple enough to have literal values, which consist of:
arithmetic types, 
reference types, 
pointer types, 
nullptr literal (aka 0),
some specific functions,

Furthermore we cannot use a constexpr pointer to point to variables inside a function ordinarily because these are not stored at a fixed address however, the address of any object initialized outside functions are all constant expression compliant.
*
*
*
*
*
*
*/
//Constant Expression Pointers

const int *p = nullptr;     // p is only a pointer to a const
constexpr int *q = nullptr; // q is a const pointer to int


// The difference between p and q is due to how the literal constexpr imposes a top-level const on the object it defines although it can still point to a const & a nonconst type without issues.




