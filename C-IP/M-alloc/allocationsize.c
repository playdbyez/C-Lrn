//gcc 7.4.0

#include  <stdio.h>
#include  <stdlib.h>

int main(void)
{
    
char *ptr;
int n  = 5;
    
    *ptr = malloc(sizeof (char)*n);
    
    printf("%p", *ptr);
    *(ptr+0) = 'm';
    *(ptr+sizeof (char)*1) = 'a';
    *(ptr+(sizeof(char)*2)) = 'z';
    *(ptr+(sizeof(char)*3)) = 'p';
    *(ptr+(sizeof(char)*4)) = 'k';
    printf("\n%p =  %c", ptr[0], ptr[0]);
    printf("\n%p", ptr[1]);        
    printf("\n%p", ptr[2]);
    printf("\n%p", ptr[3]);
    
    



}
