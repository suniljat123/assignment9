#include<stdio.h>
int main()
{
    int a,b,c,ch;
    while(1)
    {
        system("cls");
        printf("Enter length of Triangle=");
        scanf("%d%d%d",&a,&b,&c);
        printf("\nPress 1 to check is it Isosceles triangle or not?\nPress 2 to check is it Right triangle or not?\nPress 3 to check is it Equilateral triangle or not? \nPress 4 to Exit\nEnter your Choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&a!=b))
                    printf("\nIt is a Isosceles Triangle");
                else
                    printf("\nIt is Not a Isosceles Triangle");
                getch();
                break;
            case 2:
                if((c*c==a*a+b*b)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
                    printf("\nIt is a Right Angled Triangle");
                else
                    printf("\nIt is  Not a Right Angled Triangle");
                getch();
                break;
            case 3:
                if(a==b&&b==c)
                    printf("\nIt is a Equilateral Triangle");
                else
                    printf("\nIt is Not a Equilateral Triangle");
                getch();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid Choice");
                getch();

        }
    }
    return 0;
}

