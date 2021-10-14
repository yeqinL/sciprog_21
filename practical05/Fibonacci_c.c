#include <stdio.h>
#include <stdlib.h>


int retFn_1Fn(int *Fn_2,int *Fn_1);
int main(){

  int n;
  printf("please enter n:");
  scanf("%d",&n);
  getchar();
  printf("%d\n",n);

  //arguments are Fn-1 and Fn-2,get Fn and Fn-1
  int Fn,Fn_1;
  int Fn_2;
  printf("Fn_2 = ");
  scanf("%d",&Fn_2);
  getchar();
  printf("Fn_1 = ");
  scanf("%d",&Fn_1);
  Fn = retFn_1Fn(&Fn_2,&Fn_1);
  printf("Fn_1 = %d,Fn = %d\n",Fn_1,Fn);
  
   
  //print the whole series upto n
  Fn_1 = 1,Fn_2 = 0;
  printf("F0 = 0\n");
  printf("F1 = 1\n");
  for(int i=2;i<=n;i++){
    Fn = Fn_1+Fn_2;
    printf("F%d = %d\n",i,Fn);
    Fn_2 = Fn_1;
    Fn_1 = Fn;
  }



return 0;
}
int retFn_1Fn(int *Fn_2,int *Fn_1){
 return *Fn_2+*Fn_1; 
}


