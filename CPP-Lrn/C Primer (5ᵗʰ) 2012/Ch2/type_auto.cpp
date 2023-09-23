

//AUTOMATIC TYPE

/* The type specifier 'auto' lets the compiler determine the type of an object by analysing the operations being done to the object and assigning a 'mos probable' matching type

As a requirement, any varible that uses  the 'auto' type must have an initializer 
*/

auto item = val1 + val2; // item initialized to the result of val1 + val2

/* the type of item is deduced from the type of the result of adding val1 and val2.
Meaning that if val1 and 2 are sales_item type or double type then, item will result in the same type. 


Howver types must still be consistent with each other, unlike seen bellow:*/

auto i = 0, *p = &i;    // ok: i is int and p is a pointer to int
auto sz = 0, pi = 3.14; // error: inconsistent types for sz and pi





//Moreover, 
//When dealing with references, the specifier 'auto' will resort to using the type being refered to as the initializer, instead of the one being imediately used. 

int y = 0, &r = y;
auto a = r; // a is an int ( r is an alias for y , which has type int )


/*auto ordinarily ignores top-level consts but an initializer as a pointer to const (low-level consts) are kept
*/

const int ci = i, &cr = ci;
auto b = ci;       	// b is an int (top-level const in ci is dropped)
auto c = cr;       	// c is an int ( cr is an alias for ci of const top-level)
auto d = &i;       	// d is an int* ( ref of an int object is int* )
auto e = &ci;      	// e is const int* ( & of a const object is low-level const )
const auto f = ci; 	// deduced type of ci is int ; f has type const int
auto &g = ci;		// g is a const int& that is bound to ci
auto &h = 42;		// error: we can’t bind a plain reference to a literal
const auto &j = 42; 	// ok: we can bind a const reference to a literal


