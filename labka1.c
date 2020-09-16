#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
    /* Объявление переменных действительного типа */
    float    a, b, c;
    float    StartX, EndX, dX;
    float    F;
    /* ввод данных */
    printf("Введите:");
    printf("\ta = "); scanf("%f", &a);
    printf("\tb = "); scanf("%f", &b);
    printf("\tc = "); scanf("%f", &c);
    printf("\tX нач. = "); scanf("%f", &StartX);
    printf("\tX кон. = "); scanf("%f", &EndX);
    printf("\tdX = "); scanf("%f", &dX);
    /* Выполняем цикл от начального значения Х до конечного значения Х с шагом dX */
    for (float x = StartX; x <= EndX; x += dX)
    {
        /* Вычисляем значение функции F, исходя из заданных условий */
        if (x < 0 && b != 0)
        {
            F = (a * (float)pow(x, 3)) + (b * (float)pow(x, 2)) ;
            }
        else if (x > 0 && b == 0)
        {
            F = (x - a) / (x - c);
            }
        else
        {
            F = (x + c) / ( c * ( x - 10) );
            }
          /* Проверяем заданное условие */
         if (!((long)floor(a) & (long)floor(b) & (long)floor(c)) != 0)
         {
            /* Выводим округленное (целое) значение */
         printf("x = %.2f\tF = %.0f\n", x, F);
         }
          else
          {
           /* Выводим вещественное значение */
           printf("x = %.2f\tF = %.2f\n", x, F);
           }
    }
return 0;
}
