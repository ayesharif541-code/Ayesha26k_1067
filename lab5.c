//Task 1: Grading System

#include <stdio.h>
#include <math.h>
int main(){
int marks;
printf("enter your marks(0-100):\n");
scanf("%d",&marks);
if(marks>=90){
    printf("grade A");
    if(marks==100){
        printf("perfect score\n");
    }
}
else if(marks>=75){
    printf("grade b\n");
}
else if(marks>=60){
    printf("grade c\n");

}
else if(marks>=40){
    printf("grade d\n");
}  
else{
    printf("grade f\n");
}


//Task 2: Ticket Pricing at a Cinema

int age ;char day;
printf("enter age:\n");
scanf("%d",&age);
printf("enter day of the week:\n");
scanf(" %c",&day);
if(age <12 || age>60){
    printf("apply discount price:\n");
    if(day=='w'){
        printf("the tiket price is 300\n");
    }
    else{
        printf("the tiket price is 500\n");
    }
}
else{
   
    if(day=='w'){
        printf("the tiket price is 500\n");
    }
    else{
        printf("the tiket price is 800\n");
    }
}
//Task 3: Largest of Four Numbers
int x,y,z,w;
printf("enter four numbers:\n");
scanf("%d %d %d %d",&x,&y,&z,&w);
if(x>y){
   if(x>z){
    if(x>w){
        printf("the largest number is %d\n",x);
    }
   }
}
else if(y>z){
   if(y>x){
    if(y>w){
        printf("the largest number is %d\n",y);
    }
   }
}
else if(z>w){
    
   if(z>x){
    if(z>y){
        printf("the largest number is %d\n",z);
    }
   }
}
else if(w>z){
    
   if(w>x){
    if(w>y){
        printf("the largest number is %d\n",w);
    }
   }
}
else {
     printf("invalid input\n");
}
//Task 4: Electricity Bill Calculator
int units,bill;
char c_type;
printf("enter no. of units:\n");
scanf("%d",&units);
printf("enter the custemer type('D' for domestic, 'C' for commercial):");
scanf(" %c",&c_type);
if(c_type=='d'){
  if(units>0 || units<=100){
    printf("the bill is %d\n",units*2);
    bill=units*2;
  }
  else if(units>100|| units<=300){
    printf("the bill is %d\n",units*4);
    bill=units*4;
  }
   else if(units>300){
    printf("the bill is %d\n",units*6);
    bill=units*6;
  }

}
else if(c_type=='c') {
  if(units>0 || units<=100){
    printf("the bill is %d\n",units*2);
    bill=units*2;
  }
  else if(units>100|| units<=300){
    printf("the bill is %d\n",units*4);
    bill=units*4;
  }
   else if(units>300){
    printf("the bill is %d\n",units*6);
    bill=units*6;
  }
}
else{
    printf("invalid input\n");
}
printf("the %d is your total bill\n",bill);

//Task 5: Triangle Classifier

int s1,s2,s3;
printf("enter three sides of triangle:\n");
scanf("%d %d %d",&s1,&s2,&s3);
if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
     if (s1==s2 && s2==s3){
        printf("its equilateral triangle\n");
    }
    else if(s1==s2 || s2==s3 || s1==s3){
        printf("its isosceles triangle\n");
    }
    else{
        printf("its scalene triangle\n");
    }
}
else{
    printf("its not a triangle\n");
}




//Task 6: Simple Calculator with Mode Selection


int choice;
char opr;
printf("enter choice \n 1 for simple calculation \n 2 for square and sq.root");
scanf("%d",&choice);
int num1,num2;
switch(choice){
    case 1:
         printf("enter operator (+, -, *, /): ");
         scanf(" %c", &opr);
         switch(opr){
            case 1:
                printf("enter 1st num\n");
                scanf("%d",&num1);
                printf("enter 2nd num\n");
                scanf("%d",&num2);
                printf("the sum is %d\n",num1+num2);
                break;
             case 2:
                printf("enter 1st num\n");
                scanf("%d",&num1);
                printf("enter 2nd num\n");
                scanf("%d",&num2);
                printf("the difference is %d\n",num1-num2);
                break;
             case 3:
                printf("enter 1st num\n");
                scanf("%d",&num1);
                printf("enter 2nd num\n");
                scanf("%d",&num2);
                printf("the product is %d\n",num1*num2);
                break;
             case 4:
                printf("enter 1st num\n");
                scanf("%d",&num1);
                printf("enter 2nd num\n");
                scanf("%d",&num2);
                printf("num1/num2 is %f\n",num1/(float)num2);
            default:
                    printf("invalid operater\n");
                    break;
         }
         int opr2;
         printf("enter 1 for square \n 2 for sq.root: ");
         scanf(" %d", &opr2);
         switch(opr2){
            case 1:
                printf("enter 1st num\n");
                scanf("%d",&num1);
                
                printf("the square of num1  is %d\n",num1*num1);
                break;
             case 2:
                printf("enter 1st num\n");
                scanf("%d",&num1);
                
                printf("the sq.root of num1 is %f\n",pow(num1,0.5));
                break; 
            default:
                    printf("invalid operator\n");
                    break;

}
default:
        printf("invalid input\n");
        break;
}
//Task 7: Course Selection Based on Department and Semester


char dep;
int sem;
printf("enter your department:('C' for Computer Science, 'E' for Electrical Engineering, 'B' for Business).\n");
scanf(" %c", &dep);
printf("enter your semester:\n");
scanf("%d", &sem);
switch(dep){
    case 'C':
             switch(sem){
                case 1:
                    printf("programming\n foundational mathematics\n and general education \n communication courses");
                    break;
                case 2:
                    printf("data structures\n algorithms\n and general education \n communication courses");
                    break;
                case 3:
                    printf("programming\n foundational mathematics\n and general education \n Data Structures\n Object-Oriented Programming\n  Digital Logic Design");
                    break;
                default:
                    printf("invalid semester\n");
                    break;
             }
    case 'E':
             switch(sem){
                case 1:
                    printf("mathematics\n physics\n computer programming");
                    break;
                case 2:
                    printf("circuit analysis\nelectronic devices,");
                    break;
                case 3:
                    printf("programming\n circuit analysis\nelectronic devices,\n  Digital Logic Design");
                    break;
                default:
                    printf("invalid semester\n");
                    break;
             }
    case 'B':
             switch(sem){
                case 1:
                    printf("• Business English I /\nFunctional English\n Introduction to Business\n Microeconomics");
                    break;
                case 2:
                    printf("• Business English II / Business Communication\n Macroeconomics\n Principles of Accounting\nStatistics for Business");
                    break;
                case 3:
                    printf("• Financial Accounting\n Principles of Management\n Principles of Marketing\n Business Law");

                    break;
                default:
                    printf("invalid semester\n");
                    break;
             }                 
    default:
             printf("invalid department\n");
             break;    
}


//task:8

    int category, item;

    printf("1. Beverages\n");
    printf("2. Main Course\n");
    printf("3. Desserts\n");
    printf("Enter category: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
            printf("1. Tea\n");
            printf("2. Coffee\n");
            printf("3. Juice\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    printf("Tea = Rs. 100");
                    break;

                case 2:
                    printf("Coffee = Rs. 150");
                    break;

                case 3:
                    printf("Juice = Rs. 120");
                    break;

                default:
                    printf("Invalid item");
            }
            break;

        case 2:
            printf("1. Burger\n");
            printf("2. Pizza\n");
            printf("3. Pasta\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    printf("Burger = Rs. 250");
                    break;

                case 2:
                    printf("Pizza = Rs. 400");
                    break;

                case 3:
                    printf("Pasta = Rs. 300");
                    break;

                default:
                    printf("Invalid item");
            }
            break;

        case 3:
            printf("1. Ice Cream\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    printf("Ice Cream = Rs. 100");
                    break;

                default:
                    printf("Invalid item");
            }
            break;

        default:
            printf("Invalid category");
    }

//task:09
char trafic,button;
printf("enter trafic light colour");
scanf(" %c", &trafic);
printf("enter button press (y/n): ");
scanf(" %c", &button);
switch(trafic){
    case 'R':
         switch (button){
            case 'y':
                printf("wait for green light\n");
                break;
            case 'n':
                printf("stop\n");
                break;
            default:
                printf("invalid input\n");
            }
         
    case 'Y':
         switch (button){
            case 'y':
                printf("slow down and get ready\n");
                break;
            case 'n':
                printf("stop\n");
                break;
            default:
                printf("invalid input\n");
            }
         
     case 'G':
         switch (button){
            case 'y':
                printf("Go but watch for pedestrianst\n");
                break;
            case 'n':
                printf("GO\n");
                break;
            default:
                printf("invalid input\n");
            }
         
        
     }

//TASK 10:
int account_type,choose;
printf("Enter account type (1 for Savings, 2 for Current): ");
scanf("%d", &account_type);
switch(account_type){
    case 1:
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("enter your choice:");
            scanf("%d",&choose);
        switch(choose){
            case 1:
            printf("deposit from saving amount\n");
            break;
            case 2:
            printf("withdraw from saving amount\n");
            break;
            case 3:
            printf("check balance from saving account\n");
            break;
            default:
            printf("invalid input\n");
            break;
            
        }
        case 2:
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("enter your choice:");
            scanf("%d",&choose);
        switch(choose){
            case 1:
            printf("deposit from cutternt amount\n");
            break;
            case 2:
            printf("withdraw from current amount\n");
            break;
            case 3:
            printf("check balance from current account\n");
            break;
            default:
            printf("invalid input\n");
            break;
            
        }
    default:
         printf("invalid input\n");
         break;


}

return 0;
}