#include <stdio.h>
int main(){
    //TASK#01 (AGE FOR VOTE)
int age;
printf("enter you age:\n");
scanf("%d",&age);


if(age>=18){
    printf("you are eligible for vote\n");
}
else{
    printf("you are not eligible for vote\n");
}


//task #02 CHECK NUMBER DIVISIBILITY
int num;
printf("enter any number;\n");
scanf("%d",&num);
   

if(num%3==0 && num%5==0){
    printf("the num is divisible by both 3 and 5\n");
}
else{
    printf("the num is not divisible by 3 and 5\n");
}



//task #03 COMPARE TWO NUMBERS

int num1 ,num2;
printf("enter num1:\n");
scanf("%d",&num1);
printf("enter num2:\n");
scanf("%d",&num2);
if(num1>num2){
    printf("num1 is greater than num2\n");

}
    else if(num1<num2){
        printf("num2 is greaterthan num1\n");
    }
    else if(num1==num2){

        printf("num 1 is equal too num2\"");
    }



//TASK 4. FIND THE SMALLEST OF THREE NUMBERS



int a,b ,c;
printf("enter a:\n");
scanf("%d",&a);
printf("enter b:\n");
scanf("%d",&b);
printf("enter c:\n");
scanf("%d",&c);
if(a<b){
         if(a<c){
        printf("a is a smallest number \n");
        }
          else{
        printf("c is smallest \n");
         }
}
else {
    if(b<c){
     
        printf("b is smallest");
     }
    
    else {
    printf("c is smallest\n");
 }   
}
//TASK 5. CALCULATE ELECTRICITY BILL ELIGIBILITY FOR DISCOUNT

 
int units,dis;
printf("enter units");
scanf("%d",&units);
if(units<100){
     dis=units*0.1;
     printf("your bills is %d due to we give 10% discount \n",dis);
 }
else{
    printf("no discount for you sory");
}


             //SWITCH STATEMENT TASKS
             //TASK 6. BASIC ARITHMETIC OPERATIONS




char op; 
int value1,value2;
printf("enter value1:\n");
scanf("%d",&value1);
printf("enter value2:\n");
scanf("%d",&value2);
printf("enter operator(+,-,/,*):\n");
scanf(" %c",&op);
switch(op){
     case'+':
     printf("value1 +value2=%d", value1 + value2);
     break;
     case'-':
     printf("value1 -value2=%d", value1 - value2);
     break;
     case'*':
     printf("value1 *value2=%d", value1 * value2);
     break;
     case'/':
     printf("value1 /value2=%d", value1 / value2);
     break;
      }
 defult:
     printf("invalid opreater");




//TASK 7. PRINT MONTH NAME


int month;
printf("enter numaruc value of month:");
scanf("%d",&month);
switch(month){

case 1:
    printf("january\n");
    break;
case 2:
    printf("february\n");
    break;
case 3:
    printf("march\n");
    break;
case 4:
    printf("april\n");
    break;
case 5:
    printf("may\n");
    break;
case 6:
    printf("june\n");
    break;
case 7:
    printf("july\n");
    break;
case 8:
    printf("august\n");
    break;
case 9:
   printf("september\n");
    break;
case 10:
    printf("october\n");
    break;
case 11:
    printf("november\n");
    break;
case 12:
    printf("december\n");
    break;
default:
    printf("invalid month\n");



}

//TASK 8. GRADE TO REMARK CONVERTER


char grade;
printf("enter your grade:\n");
scanf(" %c",&grade);
switch(grade){

case 'A+':
    printf("excellent!\n");
    break;
case 'A':
    printf("very good!\n");
    break;
case 'B':
    printf("good!\n");
    break;
case 'C':
    printf("work hard!\n");
    break;
case 'D':
    printf("work hard!\n");
    break;
case 'F':
    printf("fail!\n");
    break;
 
    
default:
    printf("invalid grade!\n");

}




//TASK 9. SIMPLE TRAFFIC SIGNAL
 char signal;
 printf("enter signal color:\n");
scanf("%d",&signal);
switch(signal){

case 'R':
printf("STOPPP\n");
break;


case 'y':
printf("wait\n");
break;
case 'g':
printf("gooooooooooooo\n");
break;

}



//TASK 10. NUMBER TO WEEKDAY NAME

int days;
printf("enter numaric values of day:\n");
scanf("%d",&days);
 switch(days){

case 1:
printf("monday\n");
break;
case 2:
printf("tuesday\n");
break;
case 3:
printf("wednesday\n");
break;
case 4:
printf("thursday\n");
break;
case 5:
printf("friday\n");
break;
case 6:
printf("saturday\n");
break;
case 7:
printf("sunday\n");
break;
 }



    return 0;
}