#include <stdio.h>
int totalCalories(int n){
    if(n==0){
        return 0;
    }
    else
    {
        return (n * 5) + totalCalories(n - 1);
    }
}
int main(){
int n;
printf("Enter Steps:\n");
scanf("%d",&n);

int total = totalCalories( n);
printf("Total Burned calories: %d",total);
    return 0;
}