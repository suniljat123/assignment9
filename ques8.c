#include<stdio.h>
#include<conio.h>
int main()
{
float number;
int choice;
printf("\nSelect 1, for Negative to positive=");
printf("\nSelect 2, for positive to negative=");
printf("\n\nEnter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter a Negative number");
scanf("%f",&number);
number=number*(-1);
printf("\nthe Positive form of the number is %f",number);
break;
case 2:
printf("\nEnter a Positive number");
scanf("%f",&number);
number=number*(-1);
printf("\nNegative form of the number is %f",number);
break;
default:
printf("\nInvalid Input, or Characters entered");

}
return 0;
}
