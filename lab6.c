#include <stdio.h>
int main(){           //forloop
      //TASK 1: MOVIE TICKET PRICING
    int show;
    int price=500;
    for(show=1; show<=10; show++){
       
        printf("the %d show tiket price is%d\n",show,price);
        price=price+50;
    }

//TASK 2: CLASS TEST SCORES:
int i, n;
int sum=0;
int avg=0;
int score;
printf("ENTER N:");
scanf("%d",&n);
for(i=1; i<=n;i++ ){  
    printf("enter the score of student :");
    scanf("%d",&score);
     sum=sum+score;
     printf("the sum of the scores is %d\n",sum);
}
avg=sum/n;
printf("the average of the scores is %d\n",avg);


//TASK 3: LOAN INTEREST GROWTH:

int year,j;
printf("enter the year:");
scanf("%d",&year);
int money;
float intrest;
printf("enter the moeny:");
scanf("%d",&money);  
printf("enter the interest rate:");
scanf("%f",&intrest);
for(j=1;j<=year;j++){

money=money+(money*intrest);
}
printf("the total money after %d years is %d\n",year,money);


//TASK 4: ATM PIN DIGIT CHECK:
int pin,digit,summ=0;
printf("enter the pin:");
scanf("%d ",&pin);
int reverse=0;
while(pin!=0){
    digit=pin%10;
    summ=summ+digit;
    pin=pin/10;
    reverse=reverse*10+digit;
}
printf("the sum of the digits is %d\n",summ);
printf("the revrse of pin is%d\n",reverse);




//TASK 5: WATER TANK DRAINING SIMULATION:

int level,hour=0;
printf("enter the water level:");
scanf("%d",&level);
printf("the water level is %d\n",level);
while(level!=1){
    if(level%2==0){
        printf("half the water drains out\n");
        level=level/2;
        printf("the water level is %d\n",level);
    }
    else{
        level=level*3+1;
        printf("the water level is%d\n emergency refill",level);
    }
   hour++;
}
printf("Total number of hours = %d\n", hour);




//TASK 6: EXAM RESULT ENTRY SYSTEM:
int marks;

do{
    printf("enter the marks:");
    scanf("%d",&marks);


}while(marks<0 ||marks>100);

if(marks<50){
    printf("fail");
}
else {
    printf("pass");
}




//TASK 7: RESTAURANT ORDERING KIOSK:
int choice;
do{
    
printf("1) Add Item\n 2) Remove Item\n 3) View Total\n 4) Checkout.");

printf("enter your choice:");
scanf("%d",&choice);

}while(choice!= 4);


//TASK 8: WEATHER STATION TEMPERATURE LOG:


int temp[8];
 
for(i=0;i<8;i++){
    printf("enter the temperature :");
    scanf("%d",&temp[i]);
}
int max = temp[0];
int second_max = temp[1];
int cold = temp[0];
for(i=0;i<8;i++){
    if(temp[i]>max){
        second_max=max;
        max=temp[i];
   
    }
    else if(temp[i]>second_max ){

    second_max=temp[i];
   

   }
   if(temp[i] < cold){
    cold=temp[i];
}
}
 printf("the hotest temp is %d",max);
 printf("the second hotest temp is %d",second_max);
 printf("the coldest temp is %d",cold);
//tas10
int vowel=0;
int constantant=0;
char character[20];
for(i=0;i<20;i++){
printf("enter the character:");
scanf(" %c",&character[i]);
}
for(i=0;i<20;i++){
if(character[i]=='a'||character[i]=='e'||character[i]=='i'||character[i]=='o'||character[i]=='u'){
    vowel++;
    printf("its vowels %c",character[i]);
}
else{
    printf("its consonant %c",character[i]);
    constantant++;
}
printf("the number of vowels is %d\n",vowel);
printf("the number of consonants is %d\n",constantant);



// TASK 9: WAREHOUSE INVENTORY LOOKUP:

    int stock[10];
    int k;
    int search;
    int found = 0;

    for(k=0; k<10; k++)
    {
        printf("Enter stock for shelf %d: ",k);
        scanf("%d",&stock[k]);
    }

    printf("\nStock levels in reverse order:\n");

    for(k=9; k>=0; k--)
    {
        printf("Shelf %d = %d\n",k,stock[k]);
    }

    printf("\nEnter stock count to search: ");
    scanf("%d",&search);

    for(k=0; k<10; k++)
    {
        if(stock[k] == search)
        {
            printf("Stock count found at shelf %d\n",k);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Stock count does not exist\n");
    }

   
    return 0;
}