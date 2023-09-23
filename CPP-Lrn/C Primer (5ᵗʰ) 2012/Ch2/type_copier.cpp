

//TYPE COPIER KEYWORD
//is another type specifier that provides a way of coping the type/class of a previously declared object to a new object.

decltype(f()) sum = x; // sum has whatever type f returns.


const int ci = 0, &cj = ci;
int e = 5;
decltype(ci) x = 0;  // x has type const int
decltype(cj) y = x;  // y has type const int& and is bound to x
decltype(cj) z;      // error: z is a reference and must be initialized
decltype(e) g;       // g has type int     



//A decltype of an expression can also be a reference type:

int i = 42, *p = &i, &r = i;
decltype(r + 0) b; // ok: addition outputs an int ; b is an (uninitialized) int
decltype(*p) c;    // error: c is int& and must be initialized
decltype(r) a;     // r is a reference, so 'a' is a reference type.

/* 
If we want the type that r refers to, we can use r in an expression, such as r + 0,

Next, the type deduced by decltype(*p) is int&, not plain int because a pointer can onli interact with references. 
*/


//furthermore, any decltype of a double parenthesized variable is always going to output a reference.
decltype((i)) d;// error: d is int& and must be initialized
decltype(i) e;// ok: e is an (uninitialized) int

//but an output from a single parenthesized varaible can only be a reference only if the parenthisized varaible is a reference itself. 
// Also if 'd' is ever incremented like ++d, then the value of 'i' will also be incremented, since the ref of an object refers to the object itself not and not a copy of it like a pointer.
