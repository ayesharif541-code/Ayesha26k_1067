//Task 3: Weekly Temperature Report
#include <stdio.h>
int main(){
    int total=0;
    int sales[3][5];
    int i,j;
    int sum=0;
    int max=0;
    int mini=100;
    for(i=0;i<3;i++){
        printf("enter marks of student%d",i);
        for(j=0;j<5;j++){
            scanf("%d",&sales[i][j]);
            sum=sum+sales[i][j];
           
        }
        printf("sales per branch = %d \n",sum);
        printf("\n");
        total=total+sum;
    }
if(sales[i][j]>max){
        max=sales[i][j];
        printf("%d",max);
    }
if(sales[i][j]>max){
        max=sales[i][j];
        printf("%d",mini);
    }
    printf("total=%d",total);
    return 0;
}