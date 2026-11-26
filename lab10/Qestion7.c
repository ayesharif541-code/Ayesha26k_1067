#include <stdio.h>
int totalCash =0 ;
void  deposit(float amount){
    
    totalCash=totalCash +amount;
    printf("Deposited: %d\n",totalCash);
}
void showTotal(){
    printf("Total Deposite Amount : %d\n",totalCash);
    }
int main (){
deposit(5000);
deposit(2500);
deposit(1000);

showTotal();

    return 0;
}