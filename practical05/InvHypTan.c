#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double arrMac[200];
double arrNat[200];
int delta;

int arctanh();
void artanh1(double x,int n);
void artanh2(double x,int n);
int main(){
  int n;
  printf("please enter delta:");
  scanf("%d",&delta);
  n = arctanh();

  //compare
  
  for(int i =0;i<n;i++){
    printf("the ith arctanh1 = %.7f, the ith arctanh2 = %.7f\n",arrMac[i],arrNat[i]);
  }


  return 0;
}
int arctanh(){
  int sum = 0;
  for(double i = -0.9;i<=0.9;i+=0.01){
    artanh1(i,sum);
    artanh2(i,sum);
    sum+=1; 
  }
  return sum;
}
void artanh1(double x,int n){
  for(int i =0;i<n;i++){
    arrMac[n]+=pow(x,2*i+1)/(2*i+1);
  }
}

void artanh2(double x,int n){
  arrNat[n] = (1.0/2.0)*(logf(1+x)-logf(1-x)); 
}



