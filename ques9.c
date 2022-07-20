#include<stdio.h>
#include<conio.h>
int main()
{
int choice,number;
printf("\nSelect 1 to Enter even number=");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter a Even number");
scanf("%d",&number);
if(number%2)
    printf("This is odd number");
else
{
    number++;
    printf("\nUpper nearest odd number=%d",number);
}
break;
default:
printf("\nInvalid Input, or Characters entered");

}
return 0;
}
