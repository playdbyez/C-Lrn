

//TYPE ALIAS
//A type alias is variable declarator for types.



/*If called through the keyword'typedef()'
it copies the type of the object within the parethesis adn attributes it to the one being declared with in.
*/

typedef double wages;    // wages is a synonym for double
typedef wages base, *p;  // base is a synonym for double , p for double*




/*If called via the keyword 'using', 
this alias declaration will then rename the type on the left of = with a new type alias declared on the right 
which can then be used to declare other objects via this Alias.
*/

using SI = Sales_item; // SI is now a synonym for Sales_item
SI item1;              // item1 is now of type Sales_item



//Pointers  and Aliases can also be declared via the keyword typedef

typedef char *pstring;  //The type of pstring is now “pointer to char"(1)
const pstring cstr = 0; // cstr is now a "constant"(2) "pointer to char"(1)
const pstring *ps;	// ps is now a pointer(3) to a "constant"(2) "pointer to char"(1)


// if trying to redeclare a type
const char *cstr = 0; // wrong interpretation of const pstring cstr
// as this rewrite declares cstr as a pointer to const char rather than as a const pointer to char
