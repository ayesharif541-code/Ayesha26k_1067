#include <stdio.h>
#include <stdlib.h>
int main(){
/*
Task 1: Exam Marks Analyzer
Scenario: A teacher does not know in advance how many students sat the exam. The program
must ask for the number of students first and then reserve exactly enough memory for their marks.
Task: Ask the user for the number of students, then use malloc to allocate an integer array of that
size. Read the marks, then display the average, the highest and the lowest marks. Free the memory
at the end.
Hint: malloc does not clear the memory, so every element must be given a value by scanf before it
is used.
Requirements
• Allocate the array with malloc(n * sizeof(int)).
• Check that the pointer is not NULL before using it.
• Call free() at the end and set the pointer to NULL.
SAMPLE OUTPUT
Enter number of students: 5
Enter 5 marks: 80 75 90 60 85
--- Result Summary ---
Average marks: 78.00
Highest marks: 90
Lowest marks: 60
Explanation: (80 + 75 + 90 + 60 + 85) / 5 = 78.00
*/
int ptr;
int i;   
int n;
int sum=0;
int *marks;
int max =-1;
int mini =100;
int avg=0;
printf("Enter the No. Of Student: \n");
scanf("%d",&n);
  
int  *ptr= (*int)malloc()
marks = (int*)malloc(n* sizeof( int ));
printf("Enter marks :\n");

for(i=0; i<n ;i++){

  scanf("%d",&marks[i]);
  
}

sum = 0;

for(i=0; i<n ;i++){
 

  sum = sum +marks[i];

  if(marks[i]>max)
  {
      max = marks[i];
  }

  if(marks[i]<mini)
  {
      mini = marks[i];
  }


}
avg = sum / n ;



printf("AVG  :  %d", &avg);
printf("Highest  :  %d", &max);
printf("Lowest  :  %d", &mini);

return 0;
}