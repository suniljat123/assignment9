#include<stdio.h>
int main()
{
    int a,b,c;
    while(1)
    {   system("cls");
        printf("\nPress 1 for Addition\nPress 2 for Substactionion\nPress 3 for Multiplication\nPress 4 for Division\nPress 5 to Exit\nEnter your Choice=");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("\nEnter numbers=");
                scanf("%d%d",&a,&b);
                printf("\n%d+%d=%d",a,b,a+b);
                getch();
                break;
            case 2:
                printf("\nEnter numbers=");
                scanf("%d%d",&a,&b);
                printf("\n%d-%d=%d",a,b,a-b);
                getch();
                break;
            case 3:
                printf("\nEnter numbers=");
                scanf("%d%d",&a,&b);
                printf("\n%d*%d=%d",a,b,a*b);
                getch();
                break;
            case 4:
                printf("\nEnter numbers=");
                scanf("%d%d",&a,&b);
                printf("\n%d/%d=%d",a,b,a/b);
                getch();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid Choice");
                getch();

        }
    }
    return 0;
}

