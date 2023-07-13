
		::PRINTF OBJECTS::
//TYPES
%f = floating point
%d = decimal integer
%o = octal
%x = hexadecimal
%c = character
%s = string
%% = itself

//LENGTHS
%6d = decimal integer 6 characters wide
%3f = floating point 3 characters wide
%.2f = floating point 2 characters after decimal
%6.2f = floating point at least 6 wide and 2 characters after decimal


<usage>
string tx = "Text!";
int nu = 6;
printf("%s %d", tx, nu);



		::BASIC INPUT::
getint = get next int from input
getchar(); = get character
getfloat = get next float
scanf = cin

<usage>
	c = getchar();
	putchar(c);



		::DEFINE::
This function declares a symbolic constant attached to its value instead of a variable

<syntax>
	#define name value
<usage>
	#define MAX 300
	


