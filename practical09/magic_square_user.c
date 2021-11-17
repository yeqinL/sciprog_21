#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int main(){
  int n;
  printf("Enter the square side:\n");
  scanf("%d",&n);

  int i;
  int ** magicSquare = malloc(n*sizeof(int*));
  for(i = 0;i<n;i++){
    magicSquare[i] = malloc(n*sizeof(int));
  }

  int j;
  for( i =0;i<n;i++){
    printf("Enter the elements in row %d, separated bt blanks and/or linbreaks:\n",i+1);
    for(j=0;j<n;j++){
      scanf("%d",&magicSquare[i][j]); 
    }
  }

  printf("The square %s magic.\n",isMagicSquare(magicSquare,n)?"is":"is NOT");
  for(i = 0;i<n;i++){
    free(magicSquare[i]);
  }
  free(magicSquare);

  return 0;
}

