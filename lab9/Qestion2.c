#include <stdio.h>
#include >string.h>
int main(){
char id[9];


printf("Enter ID:\n");
fgets(id, 9 , stdin);

id[strlen(id)-1]='\0';

if(strlen(id)>9){
  printf("Error!\n");
  return 0;
}

//strchr() → Search for dash

if(strchr(id,'-') != &id[3]){
  printf(" Error : Check '-' \n");
  return  0;
}


//strncmp → Compare category

if(strncmp)














  return 0;
}
