#include <stdio.h>
#include <stdlib.h>

struct matrix{
  int n;
  int p;
  int q;
  int det;
  int exam[6][6];
}A,B,C;

void initialize(){
  /* define A and B*/
  for(int i= 0;i<A.n;i++){
    for(int j = 0;j<A.p;j++){
      A.exam[i][j] = i+j;
    }
  }

  for(int i =0;i<B.p;i++){
    for(int j = 0;j<B.q;j++){
      B.exam[i][j] = i-j;
    }
  }
  for(int i =0;i<C.n;i++){
    for(int j =0;j<C.q;j++){
      C.exam[i][j] = 0;
    }
  }
}
void multiplication(struct matrix A,struct matrix B, struct matrix* C){
  for(int i=0;i<(*C).n;i++){
    for(int j =0;j<(*C).q;j++){
      for(int k = 0;k<A.p;k++){
       (*C).exam[i][j]+=A.exam[i][k]*B.exam[k][j];
      }
    }
  }
}
int main(){
  A.n = 5;
  A.p = 3;
  B.p = 3;
  B.q = 4;
  C.n =5;
  C.q = 4;

  initialize();
  printf("matrix A:\n");
  for(int i=0;i<A.n;i++){
    for(int j =0;j<A.p;j++){
      printf("%d ",A.exam[i][j]);
    }

    printf("\n");
  }
  printf("matrix B:\n");
  for(int i=0;i<B.p;i++){
    for(int j =0;j<B.q;j++){
      printf("%d ",B.exam[i][j]);
    }

    printf("\n");
  }

  multiplication(A,B,&C);
  printf("matrix C:\n");
  for(int i=0;i<C.n;i++){
    for(int j =0;j<C.q;j++){
      printf("%d ",C.exam[i][j]);
    }

    printf("\n");
  }
  return 0;
}

