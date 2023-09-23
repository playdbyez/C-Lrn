                //INTEGER ARRAYS

//Use Vectors for indefinite ammount of values
//Use Arrays for definitive ammount of values (const || constexpr)
//hence and array size declaration can be of "const int"

constexpr unsigned sz = 42;   // constant expression
int *parr[sz];               // array of 42 pointers to int

// An array type cannot be of "auto"
//The initialized size must never be trespassed

const unsigned sz = 3;
int ia1[sz] = {0,1,2};          // array of three ints with values 0, 1, 2
int a2[] = {0, 1, 2};          // an array of dimension 3
int a3[5] = {0, 1, 2};         // equivalent to a3[] = {0, 1, 2, 0, 0}
string a4[3] = {"hi", "bye"}; // same as a4[] = {"hi", "bye", ""}
int a5[2] = {0,1,2};          // error: too many initializers



            //CHARACTER ARRAY

// if initialized as a list of characters the 'NULL pointer' wont be an issue (\0)
// if an array is initialized with  a string and double quotes then the array size must allow for an extra space for the 'NULL pointer'

char a1[] = {’C’, ’+’, ’+’};              // list initialization, no null, dimension size 3
char a2[] = {’C’, ’+’, ’+’, ’\0’};        // list initialization, explicit null, dimension size 4
char a3[] = "C++";                        // null terminator added automatically, dimension size 4
const char a4[6] = "Daniel";              // error: no space for the null! dimension size declared as 6 and D-A-N-I-E-L = 6 characters.



//Normally...
//Arrays cannot be initialyzed as a copy of another
//One array cannot be assigned to another

int a[] = {0, 1, 2};                  // array of three ints
int a2[] = a;                         // error: cannot initialize one array with another
a2 = a;                               // error: cannot assign one array to another


//We can however have an array of pointers and references as specified bellow:
int *ptrs[10];                        // ptrs is an array of ten pointers to int
int &refs[10] = /* ? */;              // error: no arrays of references
int (*Parray)[10] = &arr;             // Parray points to an array of ten ints
int (&arrRef)[10] = arr;              // arrRef refers to an array of ten ints


