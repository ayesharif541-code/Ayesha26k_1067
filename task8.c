
#include <stdio.h>
int main(){
    int stock[3][4][5];
    int i,j,k;
    int sum;
    int shelf_sum;
    int max=0;
    int building_no=0;
    int shelf_no=0;

    for(i=0;i<3;i++){
        printf("Enter stock for building %d:\n",i+1);

        for(j=0;j<4;j++){
            printf("Shelf %d:\n",j+1);

            for(k=0;k<5;k++){
                scanf("%d",&stock[i][j][k]);
            }
        }
    }

    for(i=0;i<3;i++){
        sum=0;

        for(j=0;j<4;j++){
            for(k=0;k<5;k++){
                sum=sum+stock[i][j][k];
            }
        }

        printf("Total stock in building %d = %d\n",i+1,sum);
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            shelf_sum=0;

            for(k=0;k<5;k++){
                shelf_sum=shelf_sum+stock[i][j][k];
            }

            if(i==0 && j==0 || shelf_sum>max){
                max=shelf_sum;
                building_no=i+1;
                shelf_no=j+1;
            }
        }
    }

    printf("Fullest shelf is in building %d, shelf %d\n",
           building_no,shelf_no);
    printf("Total items on fullest shelf = %d\n",max);

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            for(k=0;k<5;k++){
                if(stock[i][j][k]<5){
                    printf("Needs restock: [%d][%d][%d], Items = %d\n",
                           i+1,j+1,k+1,stock[i][j][k]);
                }
            }
        }
    }

    return 0;
}

