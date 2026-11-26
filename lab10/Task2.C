#include <stdio.h>
int reverseDigits(long num, int rev){
    int digit ;
   if(num==0){

    return 0;
   }
   else{
     digit = num %10;
      rev = rev *10 +digit;
       //num =num /10;

    return  reverseDigits(num/10,rev) ;
   // return reverseDigits(num)/10;
 
   }

}
int main (){

long num;
printf("Enter Digit:\n");
scanf("%d",&num);

int result=reverseDigits(num,0);
printf("Reverse Order: %d\n",result);

    return 0;
}