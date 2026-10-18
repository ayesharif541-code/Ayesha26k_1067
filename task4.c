//5 product, 3 branch
#include <stdio.h>
int main(){
    int sells[3][5];
    int i;
    int j;
    int max=0;
    int mini=100000;
    int total_branch=0;
    int sum_branch=0;
    int sum_product=0;
    int best_branch;



    for(i=0;i<3;i++){
        printf("for %d branch enter sells",i+1);
        for(j=0;j<5;j++){
            scanf("%d",&sells[i][j]);
           

        }
        
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("       %d        ",sells[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
         sum_branch=0;
        for(j=0;j<5;j++){
           
            sum_branch=sum_branch+sells[i][j];

         }
         printf("for the sales of branch%d the sum is %d \n",i+1,sum_branch);
         if(max<sum_branch){
         max=sum_branch;
         best_branch=i+1;
         }
        }



    for(j=0;j<5;j++){
        for(i=0;i<3;i++){
            sum_product=sells[i][j]+sum_product;

        }

         if(mini>sum_product){
         mini=sum_product;
          }
        }




        printf("branch max sells %d:\n",max);
        printf("product mini selles %d:\n",mini);
        printf("best branch\n %d:",best_branch);

    return 0;
}