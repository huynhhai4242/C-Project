#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int max;   
    printf("Nhap so luong: "); 
    scanf("%d", &max);
    int a[max];
    Nhap(&max, &a);
    Xuat(&max, &a);
    getch();
    return 0;
}

void Nhap(int* max, int*a) {
    for (int i = 1; i <= *max; i++)
    {
       printf("Nhap so thu %d: ", i); 
       scanf("%d", &a[i]);
    }
}

void Xuat(int* max, int*a){
    int so_sanh;
    int vi_tri[*max];
    int dem=0;
    printf("Nhap so can tim: ");
    scanf("%d", &so_sanh);
    for (int i = 1; i <= *max; i++)
    {
        if(so_sanh == a[i])
        {
            dem++;
            vi_tri[dem] = i;
        }
    }
    if(dem > 0){
        printf("Da tim thay so %d tai vi tri: ", so_sanh);
    }else
    {
        printf("Khong tim thay so %d", so_sanh);
    }
    for (int i = 1; i <= dem; i++)
    {
        if(i==dem)
        {
            printf("%d", vi_tri[i]);            
        }else {
            printf("%d, ", vi_tri[i]);
        }   
    }    
}
