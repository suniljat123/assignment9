#include<stdio.h>
int main()
{
    int a;
    printf("Enter day number=");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("Monday-Amazing day");
            break;
        case 2:
            printf("Tuesday-Good Morning");
            break;
        case 3:
            printf("Wednesday-Outstanding day");
            break;
        case 4:
            printf("Thrusday-Boring day");
            break;
        case 5:
            printf("Friday-Good day");
            break;
        case 6:
            printf("Saturday-Waiting for Sunday");
            break;
        case 7:
            printf("Sunday-Funday");
            break;
        default:
            printf("Invalid day");
    }
    return 0;
}
