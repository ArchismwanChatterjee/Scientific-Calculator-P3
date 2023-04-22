#include "simple.c"
#include "mathematical.c"
#include "matrix.c"
#include "complex.c"

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
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Random Matrix Generation\n6.Boundary Sum\n7.Non-Boundary Sum \n");
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
        case 4:
            matrix_transpose();
            break;
        case 5:
            matrix_random();
            break;
        case 6:
            matrix_boundarysum();
            break;
        case 7:
            matrix_non_boundarysum();
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
