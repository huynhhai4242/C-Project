#include <stdio.h>
int main()
{
    system("cls");
    float s = 0;
    printf("S(n) = ");
    for (float i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            s = s + (1 / (2 * i + 1));
            printf("1/%.f", (2 * i + 1));
        }
        else
        {
            s = s + (1 / (2 * i + 1));
            printf("1/%.f + ", (2 * i + 1));
        }
    }
    printf(" = %.2f", s);
    return 0;
}

// OUPUT: S(n) = 1/1 + 1/3 + 1/5 = 1.53
