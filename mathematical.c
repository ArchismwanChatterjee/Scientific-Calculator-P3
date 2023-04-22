#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define PI 3.1415

int ch;
float a, b;
int n, r;

int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}

float purmutations()
{
    Sleep(1000);
    system("cls");
start1:
    n, r;
    printf("Enter 'n' and 'r' respectively \n");
    scanf("%d", &n);
    scanf("%d", &r);

    if ((n >= r) && (n >= 0 && r >= 0))
    {
        printf("Result is %f", (fact(n) / fact(n - r)));
    }

    else
    {
        printf("Wrong input \n");
        goto start1;
    }
}

float combinations()
{
    Sleep(1000);
    system("cls");
start2:
    n, r;
    printf("Enter 'n' and 'r' respectively \n");
    scanf("%d", &n);
    scanf("%d", &r);

    if ((n >= r) && (n >= 0 && r >= 0))
    {
        printf("Result is %f", (fact(n) / (fact(r) * fact(n - r))));
    }

    else
    {
        printf("Wrong input \n");
        goto start2;
    }
}

int mathematical()
{
    printf("\nSELECT YOUR OPERATION\n 1.max/min\n 2.round of\n 3.absolute\n 4.exponential\n 5.power\n 6.root\n 7.logarithm\n 8.Natural log\n 9.remainder of decimal\n 10.hypotenuse\n 11.Trigo\n 12.Hyperbolic\n 13.Permutations\n 14.Combinations\n 15.Random\n 16.Factorial\n");
    scanf("%d", &ch);
    Sleep(1000);
    system("cls");
    srand(time(0));
    switch (ch)
    {

    case 1:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("The max is %.2f and min is %.2f", fmax(a, b), fmin(a, b));
        break;

    case 2:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("The rounded of results are %.2f and %.2f", round(a), round(b));
        break;

    case 3:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("The absolute values are %.2f and  %.2f", fabs(a), fabs(b));
        break;

    case 4:
        printf("Enter a number \n");
        scanf("%f", &a);
        printf("\n Choose  1.e^x \t\t\t 2.2^x \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf(" \n Result : %.2f", exp(a));
            break;
        case 2:
            printf(" \n Result : %.2f", exp2(a));
            break;
        }
        break;

    case 5:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("Result : %.2f", pow(a, b));
        break;

    case 6:
        printf("Enter a number \n");
        scanf("%f", &a);
        printf("\n Choose  1.square root \t\t\t 2.cube root \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf(" \n Result : %.2f", sqrt(a));
            break;
        case 2:
            printf(" \n Result : %.2f", cbrt(a));
            break;
        }
        break;

    case 7:
        printf("Enter a number \n");
        scanf("%f", &a);
        printf("\n Choose  1.base 10 \t\t\t 2.base 2 \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf(" \n Result : %.2f", log10(a));
            break;
        case 2:
            printf(" \n Result : %.2f", log2(a));
            break;
        }
        break;

    case 8:
        printf("Enter a number \n");
        scanf("%f", &a);
        printf("Result : %.2f", log(a));
        break;

    case 9:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("Remainder : %.2f", fmod(a, b));
        break;

    case 10:
        printf("Enter 2 numbers \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("Hypotenuse : %.2f", hypot(a, b));
        break;

    case 11:
        printf("1.Angle \t\t\t 2.Inverse \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter angle in degrees \n");
            scanf("%f", &a);
            a = (a / 180) * PI;
            printf("\n Choose  1.sin \t 2.cos \t 3.tan \n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf(" \n Result : %f", sin(a));
                break;
            case 2:
                printf(" \n Result : %f", cos(a));
                break;
            case 3:
                printf(" \n Result : %f", tan(a));
                break;
            }
            break;
        case 2:
            printf("Enter value \n");
            scanf("%f", &a);
            printf("\n Choose 1. sin inverse \t 2. cos inverse \t 3. tan inverse \n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf(" \n Result : %f", ((asin(a) * 180) / PI));
                break;
            case 2:
                printf(" \n Result : %f", ((acos(a) * 180) / PI));
                break;
            case 3:
                printf(" \n Result : %f", ((atan(a) * 180) / PI));
                break;
            }
            break;
        }
        break;

    case 12:
        printf("1.Angle \t\t\t 2.Inverse \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter hyperbolic angle \n");
            scanf("%f", &a);
            printf("\n Choose  1.sinh \t 2.cosh \t 3.tanh \n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf(" \n Result : %f", sinh(a));
                break;
            case 2:
                printf(" \n Result : %f", cosh(a));
                break;
            case 3:
                printf(" \n Result : %f", tanh(a));
                break;
            }
            break;
        case 2:
            printf("Enter hyperbolic area \n");
            scanf("%f", &a);
            printf("\n Choose 1. sinh inverse \t 2. cosh inverse \t 3. tanh inverse \n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf(" \n Result : %f", asinh(a));
                break;
            case 2:
                printf(" \n Result : %f", acosh(a));
                break;
            case 3:
                printf(" \n Result : %f", atanh(a));
                break;
            }
            break;
        }
        break;

    case 13:
        purmutations();
        break;

    case 14:
        combinations();
        break;

    case 15:
        printf("Result is %d \n", rand());
        break;
    case 16:
        printf("Enter a number \n");
        scanf("%d", &n);
        printf("\n Result is %d", fact(n));
        break;
    }
    return 0;
}