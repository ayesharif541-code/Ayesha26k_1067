#include <stdio.h>
struct BOOK
{
    int ID;
    char titel[25];
    int price;
};

int main (){
struct BOOK b[3];
int i;
int max=-1; 

for(i=0;i<3 ;i++){
   printf("Enter ID, Title, Price of book %d",i+1);
   scanf("%d %s %d",&b[i].ID,b[i].titel,&b[i].price);
}

printf("--- Book List ---\n\n\n");

for(i=0;i<3;i++){
   printf(" %d %s %d\n",b[i].ID,b[i].titel,b[i].price);
   if(b[i].price >max){
      max=b[i].price;
   }
}
printf("Expensive Book : %d",max);
return 0;
}