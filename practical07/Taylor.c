#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double * allocatearray(int N);
void Taylor(double *ptr, int N);
void fillwithones(double *ptr,int N);
void printarray(double *ptr,int N);
void freememory(double *ptr);
int main(int argc, const char * argv[]) {
    int N;
    printf("Please enter the order of the polynomial needed:");
    scanf("%d",&N);
    
    double *ptr = allocatearray(N);
    fillwithones(&ptr[0],N);
    
    
    Taylor(&ptr[0],N);
    printarray(&ptr[0],N);
    
    freememory(&ptr[0]);
    
    return 0;
}
double * allocatearray(int N){
    double *ptr = (double *)malloc(8*(N+1));
    return &ptr[0];
}
void fillwithones(double *ptr,int N){
    int i;
    for(i = 0;i<=N;i++){
        ptr[i] = 1;
    }
}
void Taylor(double *ptr, int N){
    int i;
    ptr[0] = 1;
    for(i=1;i<=N;i++){
        ptr[i] = pow(1,i)*1.0;
        int j;
        int count = 1;
        for(j = 1;j<=i;j++){
            count *= j ;
        }
        ptr[i]/=count;
    }
}
void printarray(double *ptr, int N){
    int i;
    double fx=0;
    printf("output the series of f(x)");
    for(i=0;i<=N;i++){
        printf("%.8lf ",ptr[i]);
        fx+=ptr[i];
    }
    printf("\n");
    printf("the result of f(x)");
    printf("%.5lf\n",fx);
}
void freememory(double *ptr){
    free(ptr);
    ptr = NULL;
}
