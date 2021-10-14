#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double artanh1(double x,int n);
int main(){
  int delta;
  printf("please enter delta:");
  scanf("%d",&delta);
  getchar();

  // implement Maclaurin series
  double x;
  printf("please enter x:");
  scanf("%lf",&x);
  printf("%.4f",artanh1(x,delta)); 

return 0;
}

double artanh1(double x,int n){
  double sum = 0;
  for(int i = 0;i<n;i++){
    sum+= pow(x,2*i+1)/(2*i+1);
  }
  return sum;
}
