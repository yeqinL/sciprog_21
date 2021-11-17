/*
 *Iterative and Recursive version of Euclid's Algorithm
 * to calculate the gcd of two positive integers
 */
#include <stdio.h>
#include <stdlib.h>
//Declare functions
int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);
int main(){
  int a,b,error;
  
  /*
 * random varaibles
 *
  srand(time(NULL));
  a = (rand()%11)+1;
  b = (rand()%11)+1;
  printf("%d %d",a,b);
 */

  
  printf("Please input two positive integers\n");
  error = scanf("%d %d",&a,&b);
  if(error !=2){
    printf("Please try again\n");
    return 1;
  }

  if (a<=0||b<=0){
    printf("These numbers are not positive!\n");
    return 1;
  }
  
  printf("Iterative gcd (%d,%d)=%d\n",a,b,iterativeGCD(a,b));
  printf("Recursive gcd (%d,%d)=%d\n",a,b,recursiveGCD(a,b));
}
//Define functions
int iterativeGCD(int a,int b){
  int temp;
  while(b!=0){
    temp = b;
    b=a%b;
    a=temp;    
  }
  return a;
}

int recursiveGCD(int a, int b){
  if(b==0){
    return a;
  }
  else{
    return(recursiveGCD(b,a%b));
  }
}








