#include<stdio.h>
int main()
{
    int ch,y;
    float bill;
    printf("Enter Electricity unit=");
    scanf("%d",&y);
    if(y<=50)
        ch=1;
    else if(y<=150&&y>50)
        ch=2;
    else if(y<=250&&y>150)
        ch=3;
    switch(ch)
    {
        case 1:
            bill=(y*0.5)*20/100+y*0.5;
            printf("\nYour Electricity bill including 20%% surcharge=%f",bill);
            break;
        case 2:
            bill=(y*0.75)*20/100+y*0.750;
            printf("\nYour Electricity bill including 20%% surcharge=%f",bill);
            break;
        case 3:
            bill=(y*1.2)*20/100+y*1.20;
            printf("\nYour Electricity bill including 20%% surcharge=%f",bill);
            break;
        default:
            bill=(y*1.5)*20/100+y*1.50;
            printf("\nYour Electricity bill including 20%% surcharge=%f",bill);s
    }

    return 0;
}
