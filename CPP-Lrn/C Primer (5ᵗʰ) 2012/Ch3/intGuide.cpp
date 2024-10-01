
Int MEMORY sizes (bits)
// Consult the <climits> library macros for more information


//normal:
int AKA int long
-2,147,483,648     to      +2,147,483,647 
	

//short int
-32,768      to      +32,767 
		
		
	
		
//unsigned:
unsigned int  AKA unsigned long int
0	to        4,294,967,295.
		
		
		
//unsigned short int
0        to         65,535
		
//unsigned long long [20 digits long]
0        to         2⁶⁴-1 ≈ 18446744073709551615

# include <climits>
unsigned long long var = UULONG_MAX;
// The macro from <climits> UULONG_MAX == 18446744073709551615	
// in case of a value overflow its value maps back to 0
// in case of a value underflow its value maps back to 18446744073709551615


