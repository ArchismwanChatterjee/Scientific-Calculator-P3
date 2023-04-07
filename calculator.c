#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <complex.h>

#define PI 3.1415

int ch;
float a, b;
int n, r;

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

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
        printf("Result is %d", rand());
        break;
    case 16:
        printf("Enter a number \n");
        scanf("%d", &n);
        printf("\n Result is %d", fact(n));
        break;
    }
    return 0;
}

int matrix_add()
{
    int a[10][10], b[10][10], c[10][10], n, i, j, k;

    printf("Enter the value of N (N <= 10): ");
    scanf("%d", &n);
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The sum of the two matrices is: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int matrix_subtract()
{
    int a[10][10], b[10][10], c[10][10], n, i, j, k;

    printf("Enter the value of N (N <= 10): ");
    scanf("%d", &n);
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("The difference of the two matrices is: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int matrix_multiplication()
{

    int m, n, p, q, i, j, k;
    int a[10][10], b[10][10], c[10][10];

    printf("Enter the order of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", &p, &q);

    if (n != p)
    {
        printf("Matrix is incompatible for multiplication\n");
    }
    else
    {
        printf("Enter the elements of Matrix-A:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B:\n");

        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < p; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The product of the two matrices is:-\n");

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

int complex_basic(void)
{

    float a, b, c, d;
    int ch;
    double complex z1;
    double complex z2;

    printf("SELECT YOUR OPERATION\n1.Display\n2.Sum\n3.Difference\n4.Product\n5.Division\n6.Conjugate\n7.Phase Angle\n8.Projection(Riemann Sphere)\n");
    scanf("%d", &ch);
    Sleep(1000);
    system("cls");

    switch (ch)
    {

    case 1:
        printf("Enter real and imaginary part respectively of the complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        z1 = a + b * I;
        printf("%.2f+%.2fi\n", creal(z1), cimag(z1));
        break;

    case 2:
        printf("Enter real and imaginary part respectively of 1st complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("Enter real and imaginary part respectively of 2nd complex \n");
        scanf("%f", &c);
        scanf("%f", &d);
        z1 = a + b * I;
        z2 = c + d * I;
        double complex sum = z1 + z2;
        printf("The sum: Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));
        break;

    case 3:
        printf("Enter real and imaginary part respectively of 1st complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("Enter real and imaginary part respectively of 2nd complex \n");
        scanf("%f", &c);
        scanf("%f", &d);
        z1 = a + b * I;
        z2 = c + d * I;
        double complex diff = z1 - z2;
        printf("The difference: Z1 - Z2 = %.2f %+.2fi\n", creal(diff), cimag(diff));
        break;

    case 4:
        printf("Enter real and imaginary part respectively of 1st complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("Enter real and imaginary part respectively of 2nd complex \n");
        scanf("%f", &c);
        scanf("%f", &d);
        z1 = a + b * I;
        z2 = c + d * I;
        double complex product = z1 * z2;
        printf("The product: Z1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));
        break;

    case 5:
        printf("Enter real and imaginary part respectively of 1st complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("Enter real and imaginary part respectively of 2nd complex \n");
        scanf("%f", &c);
        scanf("%f", &d);
        z1 = a + b * I;
        z2 = c + d * I;
        double complex quotient = z1 / z2;
        printf("The quotient: Z1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));
        break;

    case 6:
        printf("Enter real and imaginary part respectively of the complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        z1 = a + b * I;
        double complex conjugate = conj(z1);
        printf("The conjugate of Z1 = %.2f %+.2fi\n", creal(conjugate), cimag(conjugate));
        break;

    case 7:
        printf("Enter real and imaginary part respectively of the complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        z1 = a + b * I;
        double phase = cargf(z1);
        printf("The phase angle of Z1 = %0.2lf\n", phase);
        break;

    case 8:
        printf("Enter real and imaginary part respectively of the complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        z1 = a + b * I;
        double complex projec = cproj(z1);
        printf("The projection is is %f+%fi\n", creal(projec), cimag(projec));
        break;
    }

    return 0;
}

int complex_advanced()
{
    printf("\nSELECT YOUR OPERATION\n1.absolute\n2.exponential\n3.power\n4.square root\n5.logarithm\n6.Trigo\n7.Hyperbolic\n");
    scanf("%d", &ch);
    Sleep(1000);
    system("cls");
    srand(time(0));
    double complex z1;

    switch (ch)
    {

    case 1:
        printf("Enter real and imaginary part respectively of the complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        z1 = a + b * I;
        double absolute = cabsf(z1);
        printf("The absolute of Z1 = %0.2lf\n", absolute);
        break;

    case 2:
        printf("Enter real and imaginary part respectively of the complex \n");
        scanf("%f", &a);
        scanf("%f", &b);
        z1 = a + b * I;
        double complex exponential = cexp(z1);
        printf("The Result is %.2f+%.2fi", creal(exponential), cimag(exponential));
        break;

    case 3:
        printf("Enter real and imaginary part respectively of the complex and the power \n");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%d", &n);
        z1 = a + b * I;
        double complex power = cpow(z1, n);
        printf("The Result is %.2f+%.2fi", creal(power), cimag(power));
        break;

    case 4:
        printf("Enter real and imaginary part respectively of the complex\n");
        scanf("%f", &a);
        scanf("%f", &b);
        z1 = a + b * I;
        double complex root = csqrt(z1);
        printf("The Result is %.2f+%.2fi", creal(root), cimag(root));
        break;

    case 5:
        printf("Enter real and imaginary part respectively of the complex\n");
        scanf("%f", &a);
        scanf("%f", &b);
        z1 = a + b * I;
        double complex log = clog(z1);
        printf("The Result is %.2f+%.2fi", creal(log), cimag(log));
        break;

    case 6:
        printf("1.Angle \t\t\t 2.Inverse \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter real and imaginary part respectively of the complex\n");
            scanf("%f", &a);
            scanf("%f", &b);
            z1 = a + b * I;
            printf("\n Choose  1.sin \t 2.cos \t 3.tan \n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf(" \n Result : %.2f+%.2fi", creal(csin(z1)), cimag(csin(z1)));
                break;
            case 2:
                printf(" \n Result : %.2f+%.2fi", creal(ccos(z1)), cimag(ccos(z1)));
                break;
            case 3:
                printf(" \n Result : %.2f+%.2fi", creal(ctan(z1)), cimag(ctan(z1)));
                break;
            }
            break;
        case 2:
            printf("Enter real and imaginary part respectively of the complex\n");
            scanf("%f", &a);
            scanf("%f", &b);
            z1 = a + b * I;
            printf("\n 1. sin inverse \t 2. cos inverse \t 3. tan inverse \n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf(" \n Result : %.2f+%.2fi", creal(casin(z1)), cimag(casin(z1)));
                break;
            case 2:
                printf(" \n Result : %.2f+%.2fi", creal(cacos(z1)), cimag(cacos(z1)));
            case 3:
                printf(" \n Result : %.2f+%.2fi", creal(catan(z1)), cimag(catan(z1)));
                break;
            }
            break;
        }
        break;

    case 7:
        printf("1.Hyperbolic Angle \t\t\t 2.Inverse \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter real and imaginary part respectively of the complex\n");
            scanf("%f", &a);
            scanf("%f", &b);
            z1 = a + b * I;
            printf("\n Choose  1.sinh \t 2.cosh \t 3.tanh \n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf(" \n Result : %.2f+%.2fi", creal(csinh(z1)), cimag(csinh(z1)));
                break;
            case 2:
                printf(" \n Result : %.2f+%.2fi", creal(ccosh(z1)), cimag(ccosh(z1)));
                break;
            case 3:
                printf(" \n Result : %.2f+%.2fi", creal(ctanh(z1)), cimag(ctanh(z1)));
                break;
            }
            break;
        case 2:
            printf("Enter real and imaginary part respectively of the complex\n");
            scanf("%f", &a);
            scanf("%f", &b);
            z1 = a + b * I;
            printf("\n Choose 1. sinh inverse \t 2. cosh inverse \t 3. tanh inverse \n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf(" \n Result : %.2f+%.2fi", creal(casinh(z1)), cimag(casinh(z1)));
                break;
            case 2:
                printf(" \n Result : %.2f+%.2fi", creal(cacosh(z1)), cimag(cacosh(z1)));
            case 3:
                printf(" \n Result : %.2f+%.2fi", creal(catanh(z1)), cimag(catanh(z1)));
                break;
            }
            break;
        }
        break;
    }

    return 0;
}

int main()
{
start:
    Sleep(1000);
    system("cls");
    gotoxy(50, 5);
    printf("SELECT YOUR CALCULATOR\n");
    printf(" 1. SIMPLE CALCULATOR \n 2. MATHEMATICAL CALCULATOR \n 3. MATRIX CALCULATOR \n 4. COMPLEX CALCULATOR \n");
    scanf("%d", &ch);

    switch (ch)
    {

    case 1:
        simple();
        break;

    case 2:
        mathematical();
        break;

    case 3:
        printf("\n 1.Addition \t\t 2.Subtraction \t\t  3.Multiplication \n");
        scanf("%d", &ch);
        Sleep(1000);
        system("cls");
        switch (ch)
        {
        case 1:
            matrix_add();
            break;
        case 2:
            matrix_subtract();
            break;
        case 3:
            matrix_multiplication();
            break;
        }
        break;

    case 4:
        printf("\n 1. Basic Operations \t\t 2. Advanced Operations \n");
        scanf("%d", &ch);
        Sleep(1000);
        system("cls");
        switch (ch)
        {
        case 1:
            complex_basic();
            break;
        case 2:
            complex_advanced();
            break;
        }
    }
    printf("\n Do you want to use it again \n1.YES \t\t2.NO \n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        goto start;
        break;
    case 2:
        gotoxy(90, 15);
        printf("DEVELOPED BY ARCHISMWAN CHATTERJEE \n\n");
        break;
    }

    return 0;
}
