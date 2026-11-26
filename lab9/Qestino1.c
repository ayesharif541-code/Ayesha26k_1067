#include <stdio.h>
#include <string.h>
int main(){


    char firstName[21];
    char lastName[21];
    char fullName[42];
    int count_first;
    int count_secand;
    int count_full;
    char badge[42];


printf("Enter First Name:\n");
fgets(firstName,21,stdin);

printf("Enter last Namw:\n");
fgets(lastName ,21,stdin);

firstName[strlen(firstName)-1]='\0';

lastName[strlen(lastName)-1]='\0'; 

count_first = strlen(firstName);
count_secand = strlen(lastName);

if(count_first > 20){
    printf("Name Length Error!\n");
    return 0;
}
if(count_secand > 20){
    printf("Name Length Error!\n");
    return 0;
}


strcpy( fullName , firstName);
strcat(fullName," ");
strcat(fullName,lastName);


count_full = strlen(fullName);
if(count_full>41){
    printf("Error!\n");
}

strcpy( badge , lastName);
strcat(badge," ,");
strcat(badge,firstName);

printf("Badge : %s \n", badge);
printf("Full Name : %s \n",fullName);
printf("lenght : %d \n",count_full);
   return 0;
}
