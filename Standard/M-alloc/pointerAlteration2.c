//Alternative reassignment  of the value of q[10] by using an external pointer
// Possible since ptr can point to a dereference ampersand

#include  <stdio.h>

int main(void)
{
   int *ptr;

int q[15];
    q[10]= 7;
    
    
int long long major = ptr > &q[10] ? ptr : &q[10];
int long long minor = ptr < &q[10] ? ptr : &q[10];
int long long diff = major - minor;
    ptr = diff+minor;
    
    *ptr = 9;
    printf("\n%d", q[10]);
    
 

}
//Output : 9
