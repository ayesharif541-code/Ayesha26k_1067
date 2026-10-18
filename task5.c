#include <stdio.h>
int main(){
    int vacant=0;
    int occupied=0;
    int floor;
    int rooms_no;
    int i,j;
    int rooms[4][6]={
        {1,0,1,1,0,0},
        {0,1,0,1,0,1},
        {1,0,1,0,1,0},
        {0,0,0,1,1,1}
    };


    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
         printf("  %d   ",rooms[i][j]);

     }
        
        printf("\n");
   }
    
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
         if(rooms[i][j]==0){
         printf("vacant\n");
         vacant++;
     }
        }
        printf("floor %d ---> %d vacant room:\n",i+1,vacant);
   }
    
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            
     if(rooms[i][j]==1){
       occupied++; 
     printf("occupied\n");
     }

     }
        
        printf("floor %d ---> %d vacant room:\n",i+1,occupied);
   }
for(i=0;i<4;i++){
    for(j=0;j<6;j++){
if(rooms[i][j]==1 && rooms[i][j+1]==1 && rooms[i][j+2]==1  ){
    printf("3 consactive occupied in floor %d\n\n",i+1);

}
else if(rooms[i][j]==0 && rooms[i][j+1]==0 && rooms[i][j+2]==0  ){
    printf("3 consactive vacant in floor %d\n\n",i+1);

}
    }
}  
printf("total occupied room :%d\n",occupied);
printf("total vacant room :%d\n",vacant);










    return 0;
}