//Task 2: Student Marks Sheet
#include <stdio.h>
int main(){
    int marks[6][4];
    int i,j;
    int sum=0;
    for(i=0;i<6;i++){
        printf("enter marks of student%d",i);
        for(j=0;j<4;j++){
             scanf("%d",&marks[i][j]);
            sum=sum+marks[i][j];
        }
        printf("sum = %d \n",sum);
        printf("the avg = %d\n",sum/4);
        printf("\n");
    }
    return 0;
} 