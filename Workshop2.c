#include <stdio.h>
#include <stdlib.h>

// Name: HUYNH CHI HAI
// Student code: CE160053
// Day: 28-09-2021
int main()
{
    printf("Author: HuynhChiHai\n");
    printf("Student code: CE160053\n");
    printf("Day: 28-09-2021\n\n");

    Bai1();
    Bai2();
    Bai3();

    getch();
    return 0;
}

void Bai1() {
    // Cach 1
    // Write a C program that prints all even numbers between 1 and 50 (inclusive)
    // Even numbers between 1 to 50 (inclusive)
    printf("[Bai 1]\n");
    printf("- Cach 1 (for loop):\n");
    printf("Expected Output: ");
    for (int i = 1; i <= 50; i++)
    {
        if(i%2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n- Cach 2 (while):\n");
    printf("Expected Output: ");
    // Cach 2
    int i = 1;
    while(i <= 50)
    {
        i++;
        if(i%2 == 0)
        {
            printf("%d ", i);
        }
    }
}

void Bai2()
{
    // Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.
    // C�ch 1
    printf("\n\n[Bai 2]\n");
    printf("- Cach 1 (for loop):\n");
    for (int i = 1; i <= 100; i++)
    {

        if(i <= 10)
        {
            printf("# ", i);
            if(i==10)
            {
                printf("\n");
            }
        }
        if(i <= 20 && i >= 11)
        {
            printf("# ", i);
            if(i==20)
            {
                printf("\n");
            }
        }
        if(i <= 30 && i >= 21)
        {
            printf("# ", i);
            if(i==30)
            {
                printf("\n");
            }
        }
        if(i <= 40 && i >= 31)
        {
            printf("# ", i);
            if(i==40)
            {
                printf("\n");
            }
        }
        if(i <= 50 && i >= 41)
        {
            printf("# ", i);
            if(i==50)
            {
                printf("\n");
            }
        }
        if(i <= 60 && i >= 51)
        {
            printf("# ", i);
            if(i==60)
            {
                printf("\n");
            }
        }
        if(i <= 70 && i >= 61)
        {
            printf("# ", i);
            if(i==70)
            {
                printf("\n");
            }
        }
        if(i <= 80 && i >= 71)
        {
            printf("# ", i);
            if(i==80)
            {
                printf("\n");
            }
        }
        if(i <= 90 && i >= 81)
        {
            printf("# ", i);
            if(i==90)
            {
                printf("\n");
            }
        }
        if(i <= 100 && i >= 91)
        {
            printf("# ", i);
            if(i==100)
            {
                printf("\n");
            }
        }
    }
    // C�ch 2
    printf("- Cach 2 (while(1)):\n");
    int dem = 0;
    int dong = 0;
    while (1)
    {
        dem++;
        printf("# ");
        if(dem == 10)
        {
            dem = 0;
            dong++;
            printf("\n");
        }
        if(dong == 10)
        {
            break;
        }
    }
    // C�ch 3
    printf("- Cach 3 (for(;;)):\n");
    int i =0;
    int demdong = 0;
    for (;;)
    {
        i++;
        demdong++;
        printf("# ", i);
        if(i == 10)
        {
            printf("\n");
            i=0;
        }
        if(demdong == 100)
        {
            break;
        }
    }

}

void Bai3()
{

    //Write a C program that print Multiplication Table of a number
    // Cach 1
    printf("\n\n[Bai 3]\n");
    printf("- Cach 1 (for loop):\n");
    int so, a;
    printf("Nhap bang cuu chuong: ");
    scanf("%d", &so);
    printf("6 Multiplication Table\n");
    for (int i = 1; i <= 10 ;i++)
    {
        printf("%d x %d = %d\n", so, i, so * i);
    }

    // Cach 2
    printf("\n- Cach 2 (while(1)):\n");
    int dem=0;
    while (1)
    {
        dem++;
        printf("%d x %d = %d\n", so, dem, so * dem);
        if(dem == 10)
        {
            break;
        }
    }
}

