#include <stdio.h>
int main (){
int n;
int i;
int j;
  printf("introduce los pisos  :" );
  scanf("%d",&n);
  
  for(i=0; i<=n; i++){
  for(j=0; j<i; j++){
  printf("*");
  }
  printf("\n");
  }
  printf("\n\n");
  
  for(i=j; i>=0; i--){
  for(j=0; j<i; j++){
  printf("*");
  }
  printf("\n");
  }
  return 0;
  }