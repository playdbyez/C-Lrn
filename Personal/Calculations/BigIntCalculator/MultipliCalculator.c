//https://www3.cs.stonybrook.edu/~skiena/algorist/book/programs/bignum.c
//https://gmplib.org/
//www.calculator.net/big-number-calculator.html




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

typedef struct listnode
{
    struct listnode *next;
    char value;
}Node;

Node *Listmake(char val)
{   Node *chptr = malloc (sizeof (Node));
    chptr -> value = val;
    chptr -> next = NULL;
    return chptr;   }

Node *Listin(Node *head, char val)
{   Node *nptr = Listmake (val);
    nptr -> next = head;
    return nptr;    }

char *Listerate (Node *head, char *arr, int len)
{
        unsigned bil = 0;
        unsigned uti = 0;
        Node *pl = head;
        while (pl != NULL )
                {
                if (pl -> value != '0'){bil = 1;}
                if (bil == 1){arr[uti] = pl->value; uti++;}
                      pl = pl->next;
                }
return arr;
}


void Listend(Node *head)                      
{
  while (head != NULL){
        Node *p = head->next;
        free(head);
        head = p;  
  }
}

 
int main()
{
clock_t start , end;
start = clock();
char *buffx = "18785312561";       // Buffx's strlen() cannot be longer  than Buffy
char *buffy = "249875659728493";

 

unsigned long long xlen = strlen(buffx);
unsigned long long ylen = strlen(buffy);
 
unsigned long long bas;     
unsigned long long expo;

char * buffsum;
    buffsum = malloc (sizeof(char)*3);

    char buffs1[3];
    
char * buffs2;
     buffs2 = malloc (sizeof(char)*3);


int zrz = 0;
unsigned gig;
gig = xlen > ylen ? xlen : ylen;
 
unsigned long long sum    = 0;
unsigned long long carry  = 0;
unsigned long long n = 1; 
unsigned long long m = 1;
unsigned long long o = 0;
unsigned long long q = 0;
unsigned long long w = 0;
unsigned long long v = 0;
unsigned long long tt = -1;
 
 
    char *final; 
    final = (char*) malloc (gig * sizeof (char));
    q = gig;
    
 

for (unsigned long long i = strlen(buffy) ; i > 0 ; i--){  
    while (w < v){final[o] = '0';w++;o++;q++;tt++;final =  realloc (final, q*sizeof (char));}
    v++;
    
 expo = buffy[strlen(buffy)-m] -48;
 carry = 0;
    for (unsigned long long j = strlen(buffx) ; j > 0 ; j--){
 
                                                bas  = buffx[strlen(buffx)-n] -48;
        sum  = expo * bas;
        zrz = 0;
        if (sum == 0){zrz = 1;}
        sum= carry+sum;
        sprintf(buffsum,"%lld", sum);
        if (zrz == 1 ){carry = 0;}
        if(j != 1){
            if(strlen(buffsum) > 1){
                    buffs1[0] = buffsum[0];
                    buffs2[0] = buffsum[1];
                    if (strlen(buffsum) > 1)carry     = buffs1[0]-48;
                    final[o]  = buffs2[0];
                    o++;q++;tt++;
                final =  realloc (final, q*sizeof (char));
            }
 
           if (strlen(buffsum) == 1){
                    carry  = 0;
                    final[o]  = buffsum[0];
                    o++;q++;tt++; 
                final =  realloc (final, q*sizeof (char));
 
            }
        }
 
        if (j == 1 ){
            if (strlen(buffsum) > 1){
        final[o] = buffsum[1];o++;q++;tt++;
                final =  realloc (final, q*sizeof (char));
        final[o] = buffsum[0];o++;q++;tt++;
                final =  realloc (final, q*sizeof (char));
            }
            if (strlen(buffsum) == 1){final[o] = buffsum[0];o++;q++;tt++;
                final =  realloc (final, q*sizeof (char));}
        }            
        n++;
    }
    if (i != 1){final[o] = '-';tt =0;}
    carry = 0;
    o++;q++;
    final =  realloc (final, q*sizeof (char));
    n =1;
    m++;
    w=0;
}
 memset( final+strlen(final), '\0', sizeof (char) );

int flen = q;
 
 


o = 0;
sum   = 0;
carry = 0;
int spcline[gig];    
while (o < gig){ *(spcline+o) = o; o++;}    

   char tablz [gig][tt];  
    int szt1 = sizeof tablz/ sizeof tablz[0];
    int szt2 = sizeof tablz[0]/ sizeof tablz[0][0];
    
    
    
    for (int i  = 0; i < szt1; i++ ){for (int j  = 0; j < szt2; j++ ){ tablz[i][j] = '0';}    }
    
    
  o = 0;   
    for (int i  = 0; i < szt1; i++ ){
        for (int j  = szt2-1; j > -1; j-- ){
                        if (final[o] == '-'){o++; break;}
            tablz[i][j] = final[o];
                        if (o < strlen(final)){o++;}
        }     
    }
    
    if (strlen(final) == 1){printf("%s x %s = ( %s )",buffx,buffy, final);}
  
    if (strlen(final) > 1){
                            memset (buffsum, '\0', sizeof(char));
                            buffsum = malloc(sizeof(char)*3);
                            Node * nd = NULL;
                            unsigned bl = 0;

                            for (int i = szt2-1; i > -1; i--){    
                                for (int j = 0; j < szt1; j++){     sum += tablz[j][i] - 48;   }
                                sum+= carry;
                                        sprintf(buffsum, "%d", sum);

                                if (strlen(buffsum) == 1){ nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
                                if (strlen(buffsum) == 2){ nd = Listin(nd, buffsum[1]); bl++; carry =buffsum[0]-48; }
                                if (strlen(buffsum) == 3){ buffsum = realloc (buffsum, sizeof(char)*4); nd = Listin(nd, buffsum[2]); bl++; carry =sum/10; buffsum[2] = '\0'; }

                                if (i == 0 && strlen(buffsum) == 2) {nd = Listin(nd, buffsum[1]); bl++;nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
                                if (i == 0 && strlen(buffsum) == 1) { carry = 0;}

                                sum = 0;
                            }

                            free (buffsum);
                            char *buff;
                          buff = malloc(sizeof (char) * (bl+1));
                          buff = Listerate(nd, buff,bl+1);
                          Listend(nd);
                            printf("%s x %s = ( %s )",buffx,buffy, buff);
    
    }

                
end= clock();
printf("\n[Result fetched in %fms]", (double) (end-start)  / CLOCKS_PER_SEC);

return 0;
}


/* Example
X = 359538626972463181545861038157804946723595395788461314546860162315465351611001926265416954644815072042240227759742786715317579537628833244985694861278948248755535786849730970552604439202492188238906165904170011537676301364684925762947826221081654474326701021369172596479894491876959432609670712659248448274431
Y = 64634012142622014601429753377339903920888205339430968064260690855049310277735781786394402823045826927377435921843796038988239118300981842190176304772896566241261754734601992183500395500779304213592115276768135136553584437285239512323676188676952340941163291704072610085775151783082131617215104798247860771043648897465850453250597019054050236516350554372758413458882181237504319709611419665167808708405946697430767093557052321357537912535788875186314547795827100338076483475996774934174011983852616552819904002209228390101253843854363534394957137222238047433923853760181872911050689711271424580082276350892494968324096


Expected Output
2323842398147983225143801013321829748274790070545158094664594460914881492398844090294934417813247362900530463101992206977596211837816018848665154268874812960412844655882576199537619940395620650880097906322816724957891872         2160096419311906337477526089169444835116179079570972903006952307918275245238316502045332243706053929895236022666813892760993148193863113739033932696416598651795990243390751171884560204082730268449621936067925502096691610910582949828554885821758844013044929141642394303047899191180249053932666512970565448878128424561043734090559585878347782765396015908014296283816267054447313646516779858391838157665891347899915737212565559376142711183555342374263221979736803898796133334664408667226753541648251483471845800829132998007247229359496168170676356245446239880832026711566230675841410635576044748648142545334513456829004473530953592299910672020042851041553647795493753284191103178437580959043599735655157989376

Actual Output is incorrect after the 220th digit
2323842398147983225143801013321829748274790070545158094664594460914881492398844090294934417813247362900530463101992206977596211837816018848665154268874812960412844655882576199537619940395620650880097906322816724957891872 [ERROR] 10046037128514834718458008291329980072472293594961681706763562454462398808320267115662306758414106355760447486481425453345134568290044735309535922999106720200428510415536477954937532841911031784375809590435997356551579893760000009789644
