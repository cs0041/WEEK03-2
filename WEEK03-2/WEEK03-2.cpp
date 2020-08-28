#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, c;
    scanf_s("%lf", &a);
    if (a < 0)
    {
        a *= -1;
    }
    c = a - (int)a;
    if (c == 0)
    {
        if (((int)a % 2) == 0)
        {
            printf("even");
        }
        else
        {
            if (((int)a % 2) != 0)
            {
                printf("odd");
            }
            else
            {
                printf("Error");
            }
        }
    }
    else
    {
        printf("Error");
    }
}
