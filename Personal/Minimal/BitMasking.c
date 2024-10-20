/*
BitMasking
Is the trick to access only a particular bit within a process and ignore the rest.
This is done by masking the ignored bit positions with 0 and only assigning 1 to the position we want to work with
Instead of a 1 printf will output a value of 2ᵖᵒˢᶦᵗᶦᵒⁿ 

[] Generally useful for encryption algorithms or video compression algorithms
[] It emplies working on binnary numbers and individual bits
[] usefull if the system have memory limitations like embedded devices
[] used often for managing permissions (rwxrwxrwx) == (777) == ( 0111 0111 0111 )
[] typical operations include:
    < AND >        Check Bits    [ 13 & (1 << 3) ]
    ( find out if its 1 or 0 )
    
    < OR >         Set Bits      [ 13 | (1 << 5) ]
    ( set individual bit to 1 )
    
    < AND + NOT >  Clear Bits   [ 13 & ~(1 << 2) ]
    ( set individual bit to 0 )
    
    < XOR >        Toggle Bits  [ 13 ^ (1 << 3) ]
    ( set bits to the opposite of its currently value )

    


//watch?v=FmY-PjukO8I
//watch?v=ffPOA7UUDAs
//bitmasking

//watch?v=OBP_nKp_eCw 
//bitwise in embedded

//watch?v=UPVoGMZWQMU
//Noob to expert

//watch?v=cLcQyOy73c0
//watch?v=6hnLMnid1M0
// bitwise flag system
*/

##### IMPLEMENTATION ####
//check bits from decimals one to five
//int positions range from 0 to bitlength -1
//short int is 16 bits

#include  <stdio.h>

int main()
{
    
    
    
    int short f = 1;
    int j = 15;
    for (int i = 0; i <= 5; i++){
        
        while ( j >= 0){
                            printf("%d", i & (1 << j));
                            if (j%4 == 0 && j != 0 ){printf(" ");}
                            j--;
                        }
        printf("\n");
        j = 15;
    }
    return 0;
}
