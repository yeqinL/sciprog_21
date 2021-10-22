#include <stdio.h>
#include <math.h>
double arctan1(const double x, const double delta);

double arctan2(const double x);

int main(){
  double prec;
  printf("please neter precision for the Maclaurin series:\n");
  scanf("%lf",&prec);
  getchar();

  double begin,end;
  printf("please enter the start and finish points for x:\n");
  scanf("%lf, %lf",&begin,&end) ;

  double a = ((fabs(begin)+fabs(end))/prec)+1.0;
  int asize = a;

  double tan1[asize];
  double tan2[asize];

  double i;
  int j = 0;

  for(i = begin;i<=end;i+=prec){
    tan1[j] = arctan1(i,prec);
    tan2[j] = arctan2(i);
    printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n",i,i,fabs(tan1[j]-tan2[j])); 
    j++;
  }


  return 0;

}
double arctan1(const double x, const double delta){
  double arcTan = 0;
  double elem;
  int n =0;
  do{

    double val = 2*n+1;
    elem = pow(x,val)/val;
    arcTan+= elem;
    n++;
  }while(fabs(elem)>=delta);
  return arcTan;
}

double arctan2(const double x){
  return (log(1+x)-log(1-x))/2.0;
}
