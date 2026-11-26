#include <stdio.h>
int token =1;
void getToken(){
    
  printf("Tiket Number %d \n",token);
token++;
}
int main(){
  int i;
  for(i=0 ; i<5 ;i++){

    getToken();

  }

    return 0;
}