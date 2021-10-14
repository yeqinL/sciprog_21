#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double artanh2(double x);
int main(){

  double x;
  printf("please enter x:");
  scanf("%lf",&x);

  //implement natural logarithms
  printf("%.4f",artanh2(x));  
  return 0;
}

double artanh2(double x){
  return (1.0/2.0)*(logf(1+x)-logf(1-x));

}
