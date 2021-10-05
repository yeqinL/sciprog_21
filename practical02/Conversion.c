#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Complete the expression */
/* numdigits = ceil( ... );
   printf("The number of digits is %d\n",numdigits);
*/


   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);
   int check =0;
   int time = 1;
/*   for(int j=0;j<25;j++){
     check += binnum[24-j]*time;
     time *= 2;
   }
*/ int j =0;
   while(binnum[j]!='\0'){
     check += (binnum[24-j]-'0')*time;
     time *=2;
     j++;    
   }
   printf("binnum = %d\n",check);
   printf("logf(number of bindigits) =%.2f\n",ceil(logf(check)/logf(2))); 
 /* ceil means the minimal max integer of the float logf based on e so we needto divide it by logf(2)*/
}

