#include <stdio.h>
int main(){
    int i,j;
    int win=0;
    char board[3][3];
    printf("enter only (characters X, O, -)");
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf(" %c", &board[i][j]);
    }
 }
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf(" %c", &board[i][j]);
    }
 }
 for(i=0;i<3;i++){
     if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!='-')
     { printf("Winner: %c\n",board[i][0]);
         win=1; break; 
        }
     }
if(win==0){
     for(j=0;j<3;j++){ 
        if(board[0][j]==board[1][j] && board[1][j]==board[2][j] && board[0][j]!='-')
        {
             printf("Winner: %c\n",board[0][j]); 
             win=1; 
             break; 
            }
         }
         }
          if(win==0){ 
            if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!='-')
            { printf("Winner: %c\n",board[0][0]); 
                win=1;
             }
             }
              if(win==0){
                 if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!='-') { printf("Winner: %c\n",board[0][2]); 
                    win=1;
                 }
                 }
                  if(win==0){ 
                    printf("Draw\n"); 
                } return 0; 
            }
