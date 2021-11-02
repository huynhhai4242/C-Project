#include <stdio.h>
#include <stdlib.h>

int main()
{

    getch();
    return 0;
}

// Huynh Chi Hai_CE160053 | 21-09-2021
// Enter 5 numbers and give a positive number, calculate the average
void bai1()
{
    /*
    // CÁCH 1
    printf("[Enter 5 numbers and give a positive number, calculate the avera]\n");
    int a, b, c, d, e;
    int positive = 0;
    float average = 0;
    printf("Input the number: "); scanf("%d", &a);
    printf("Input the number: "); scanf("%d", &b);
    printf("Input the number: "); scanf("%d", &c);
    printf("Input the number: "); scanf("%d", &d);
    printf("Input the number: "); scanf("%d", &e);

    if(a > 0){
        positive++;
    } else {
        a=0;
    }
    if(b > 0){
        positive++;
    } else {
        b=0;
    }
    if(c > 0){
        positive++;
    } else {
        c=0;
    }
    if(d > 0){
        positive++;
    } else {
        d=0;
    }
    if(e > 0){
        positive++;
    } else{
        e=0;
    }
    printf("Number of positive numbers: %d", positive);
    average = (a+b+c+d+e)/positive;
    printf("\nAverage value of the said positive numbers: %.2f", average);

    // C�CH 2
    int sl;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &sl);

    int a[sl], n=0;
    float kq = 0;

    for(int i = 1; i <= sl; i++)
    {
        printf("Nhap so %d: ", i);
        scanf("%d", &a[i-1]);
    }
    for(int i = 0; i < sl; i++)
    {
        if(a[i] > 0) {
            n++;
            kq = a[i] + kq;
        }else{
            a[i] = 0;
        }
        if(i==sl-1)
        {
            kq = kq/n;
            printf("KQ: %.2f", kq);
        }
    }
    */
}

// Huynh Chi Hai_CE160053 | 21-09-2021
// Enter 5 numbers and give the maximum value, give the position of the value
void bai2()
{
    /*
    // CÁCH 1
    printf("\n\n[Enter 5 numbers and give the maximum value, give the position of the value]\n");
    int a, b, c, d, e;
    printf("Input 5 integers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    printf("Expected Output:\n");
    if(a > b && a > c && a > d && a > e){
        printf("Highest value: %d", a);
        printf("\nPosition: 1");
    }
    if(b > a && b > c && b > d && b > e){
        printf("Highest value:: %d", b);
         printf("\nPosition: 2");
    }
    if(c > a && c > b && c > d && c > e){
        printf("Highest value: %d", c);
        printf("\nPosition: 3");
    }
    if(d > a && d > b && d > c && d > e){
        printf("Highest value: %d", d);
        printf("\nPosition: 4");
    }
    if(e > a && e > b && e > c && e > d){
        printf("Highest value: %d", e);
        printf("\nPosition: 5");
    }

    // CÁCH 2
    int sl = 0, so = 0, position = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &sl);
    int a[sl];
    for(int i = 1; i <= sl; i++)
    {
        printf("Nhap so %d: ", i);
        scanf("%d", &a[i-1]);
        if(i==sl)
        {
            for(int h = 0; h < sl; h++)
            {
                if(a[h] > so)
                {
                    so = a[h];
                    position++;
                }
            }
        }
    }
    printf("So lon nhat la so %d tai vi tri %d", so, position);
    */
}

// Huynh Chi Hai_CE160053 | 21-09-2021
// Enter 3 numbers, separate each digit by 2 spaces
void bai3()
{
    printf("\n\n[Enter 3 numbers, separate each digit by 2 spaces]\n");
    int a, b, c;
    printf("Input: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d  %d  %d", a,b,c);
}
