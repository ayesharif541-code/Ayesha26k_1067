
#include <stdio.h>
int main(){
    char titles[5][50];
    char letter;
    int copies[5];
    int i,j;
    int vowels;
    int max=0;
    int max_book=0;

    for(i=0;i<5;i++){
        printf("Enter title of book %d: ",i+1);
        scanf(" %[^\n]",titles[i]);

        printf("Enter number of copies: ");
        scanf("%d",&copies[i]);
    }

    printf("\nLibrary Catalog\n");
    printf("Book Title\t\tCopies\n");

    for(i=0;i<5;i++){
        printf("%s\t\t%d\n",titles[i],copies[i]);
    }

    for(i=0;i<5;i++){
        vowels=0;

        for(j=0;titles[i][j]!='\0';j++){
            if(titles[i][j]=='a' || titles[i][j]=='e' ||
               titles[i][j]=='i' || titles[i][j]=='o' ||
               titles[i][j]=='u' || titles[i][j]=='A' ||
               titles[i][j]=='E' || titles[i][j]=='I' ||
               titles[i][j]=='O' || titles[i][j]=='U'){
                vowels++;
            }
        }

        printf("Vowels in %s = %d\n",titles[i],vowels);
    }

    printf("\nEnter a letter to search titles: ");
    scanf(" %c",&letter);

    for(i=0;i<5;i++){
        if(titles[i][0]==letter){
            printf("%s\n",titles[i]);
        }
    }

    for(i=0;i<5;i++){
        if(i==0 || copies[i]>max){
            max=copies[i];
            max_book=i;
        }
    }

    printf("\nTitle with most copies: %s\n",titles[max_book]);
    printf("Number of copies: %d\n",max);

    return 0;
}

