#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <complex.h>

int ch;
float a, b;
int n, r;

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
