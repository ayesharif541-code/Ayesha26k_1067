#include <stdio.h>
struct date{
        int date;
        char day[10];
        char month[10];
};
struct patient {

    char name[20];
    int age;
   struct date addmition; 

};
int main()
{

struct patient p[2];

int i ;


for(i=0;i<3 ;i++){

   printf("Enter name , age %d",i+1);
   scanf("%s %d",p[i].name,&p[i].age);


     printf("Enter Date day month of admition: \n");
     scanf(" %d  %s %s",&p[i].addmition.date,p[i].addmition.day,p[i].addmition.month);

   


}


for(i=0;i<3 ;i++){

   printf("%s %d %d  %s %s\n\n",p[i].name,p[i].age,p[i].addmition.date,p[i].addmition.day,p[i].addmition.month);


}

    return 0;
}
