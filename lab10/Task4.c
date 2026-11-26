#include <stdio.h>
struct employee
{
    
    char name[20];
    int id;
    int salary;

};

int main(){

struct employee E[3];
int i;

for(i=0 ; i<3 ; i++){

    printf("Enter Employee id , name  , Salary :");
    scanf("%d %s %d ",&E[i].id ,E[i].name , &E[i].salary);

}

printf("---Updated Salary---\n");

for(i=0 ; i<3 ; i++){

    if(E[i].salary<50000)
    {

       E[i].salary = E[i].salary +E[i].salary * 0.10; 
       printf("%d %s %d",E[i].name , E[i].id , E[i].salary);


    }

}

return 0;
}