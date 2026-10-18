#include <stdio.h>
int main(){
   //TASK 1: CINEMA SEAT BOOKING
   int cinema[5][8]={
    {1,0,0,1,0,1,1,0},
    {1,1,0,0,0,1,0,0},
    {1,1,1,1,0,0,1,0},
    {1,0,0,1,0,1,1,1},
    {0,0,0,1,0,1,1,0},
   
   };
   int i,j;
   for(i=0;i<5;i++){
    for(j=0;j<8;j++){
        if(cinema[i][j]==1){
            printf(" x ");
        }
         if(cinema[i][j]==0){
            printf(" . ");
        }
    }
    printf("\n");
   }
    return 0;
}