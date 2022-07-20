#include<stdio.h>
int main()
{
    int ch,y;
    printf("Enter year=");
    scanf("%d",&y);
    if(y%4==0)
        ch=1;
    switch(ch)
    {
        case 1:
            printf("\nLeap Year");
            break;
        default:
            printf("\nNon-Leap Year");

    }

    return 0;
}
