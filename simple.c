#include <stdio.h>
float a, b;
char ch;
int simple()
{
    printf("SELECT YOUR OPERATION \n 1.+\n 2.-\n 3.* \n 4./ \n ");
    scanf("%d", &ch);
    Sleep(1000);
    system("cls");
    switch (ch)
    {

    case 1:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("The sum is %.2f \n", (a + b));
        break;

    case 2:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("The difference is %.2f \n", (a - b));
        break;

    case 3:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("The multiplication is %.2f \n", (a * b));
        break;

    case 4:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("The quotient is %.2f \n", (a / b));
        break;

    default:
        printf("Wrong command");
    }
    return 0;
}
