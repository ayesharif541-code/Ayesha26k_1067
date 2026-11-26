#include <stdio.h>
struct address{
   char city[10];
   int  houseNumber;
    
};
struct product{
    char name[10];
    int price;

    struct address order;
};


int main(){
    struct product o;
    int done;
printf("Enter Order ID: \n");
scanf("%d",&done);
printf("Enter product name and price:\n");
scanf("%s %d",o.name,&o.price);
printf("Enter city and house number:\n");
scanf("%s %d",o.order.city,&o.order.houseNumber);

printf("Order : %d\n",done);
printf("Deliver to: House %d,%s\n",o.order.houseNumber, o.order.city);
printf("Product:%s",o.name);


int  total = o.price +1.05;
printf("total price : %d",total);
    return 0;
}
