#include <stdio.h>
#include <stdlib.h>
struct matrix{
  int n;
  int p;
  int q;
  int det;
  int exam[6][6];
};
void multiplication(struct matrix A,struct matrix B, struct matrix* C){
  for(int i=0;i<(*C).n;i++){
    for(int j =0;j<(*C).q;j++){
      for(int k = 0;k<A.p;k++){
       (*C).exam[i][j]+=A.exam[i][k]*B.exam[k][j];
      }
    }
  }
}
