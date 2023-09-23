 
/*
In this case we are trying to determine if the object being declared/initialized  is locked in position and so,operates at a top level constant or otherwise at low-level

Top-level const:
The object itself is a locked const. 
//
int *const p1 = &i;
const int ci = 42;


When we copy an object, top-level consts are ignored:
i = ci; 
p2 = p3;


Low-level const:
The pointer can point to a const object.  
//
const int *p2 = &ci;
const int &r = ci;

const int *p2 = &i;
&r2 = ci;



