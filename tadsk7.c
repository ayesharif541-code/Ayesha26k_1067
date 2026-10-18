
#include <stdio.h>
int main(){
    int marks[3][4][5];
    int i,j,k;
    int sum=0;
    int fail;
    float avg;
    float topper;
    float dept_avg;
    float highest_avg=0;
    int topper_student;
    int best_dept;

    for(i=0;i<3;i++){
        printf("Department %d\n",i+1);

        for(j=0;j<4;j++){
            printf("Enter marks of student %d in 5 subjects:\n",j+1);

            for(k=0;k<5;k++){
                scanf("%d",&marks[i][j][k]);
            }
        }
    }

    for(i=0;i<3;i++){
        topper=0;
        topper_student=0;
        dept_avg=0;

        for(j=0;j<4;j++){
            sum=0;
            fail=0;

            for(k=0;k<5;k++){
                sum=sum+marks[i][j][k];

                if(marks[i][j][k]<40){
                    fail=1;
                }
            }

            avg=sum/5.0;

            printf("Department %d, Student %d Average = %.2f",
                   i+1,j+1,avg);

            if(fail==1){
                printf(" FAIL\n");
            }
            else{
                printf(" PASS\n");
            }

            if(j==0 || avg>topper){
                topper=avg;
                topper_student=j+1;
            }

            dept_avg=dept_avg+avg;
        }

        dept_avg=dept_avg/4;

        printf("Topper of Department %d = Student %d\n",
               i+1,topper_student);
        printf("Topper Average = %.2f\n",topper);
        printf("Department %d Overall Average = %.2f\n",
               i+1,dept_avg);

        if(i==0 || dept_avg>highest_avg){
            highest_avg=dept_avg;
            best_dept=i+1;
        }
    }

    printf("\nDepartment with Highest Average = %d\n",best_dept);
    printf("Highest Department Average = %.2f\n",highest_avg);

    return 0;
}

