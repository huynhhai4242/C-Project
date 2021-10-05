#include <stdio.h>
#include <stdlib.h>

int main()
{

    while(1)
    {
        //(Bai 3 co tham khao internet: hinh tam giac rong va tam giac dac)
        Menu_Tong();
    }
    getch();
    return 0;
}

//Bai 1
void Menu_Bang_Cuu_Chuong() {
    int cuu_chuong;
    printf("] Vui long chon bang cuu chuong: ");
    scanf("%d", &cuu_chuong);
    printf("=> Ban da chon ban cuu chuong %d. Vui long chon chuc nang:\n", cuu_chuong);
    Chuc_nang(cuu_chuong);
}
void Chuc_nang(int a) {
    int chon_chuc_nang;
    int cuu_chuong = a;
    printf("[1] In bang cuu chuong\n");
    printf("[2] In toan bo bang cuu chuong\n");
    printf("[3] Thoat\n");
    printf("Chon: ");
    scanf("%d", &chon_chuc_nang);
    switch (chon_chuc_nang)
    {
    case 1:
        for(int i=1;i<=10;i++) {
            printf("%d * %d = %d\n", cuu_chuong, i, cuu_chuong*i);
        }
        break;
    case 2:
        for(int i=1;i<=10;i++) {
            for (int e =1; e<=10; e++)
            {
                printf("%d * %d = %d\n", i, e, i*e);
            }
            printf("-----------\n");
        }
        break;
    case 3: printf("Bam phim Enter de thoat\n"); exit(0); break;
    default: break;
    }
}

//Bai 2
void Menu_Phep_Toan(){
    int chon;
    printf("Vui long chon phep toan:\n");
    printf("[1] Phep cong\n");
    printf("[2] Phep tru\n");
    printf("[3] Phep nhan\n");
    printf("[4] Phep chia\n");
    printf("[5] Thoat\n");
    printf("Chon: ");
    scanf("%d", &chon);
    switch (chon)
    {
        case 1:
            printf("[Phep cong]\n");
            Phep_Cong();
            break;
        case 2:
            printf("[Phep tru]\n");
            Phep_Tru();
            break;
        case 3:
            printf("[Phep nhan]\n");
            Phep_Nhan();
            break;
        case 4:
            printf("[Phep chia]\n");
            Phep_Chia();
            break;
        case 5:
            printf("Nhan Enter de thoat chuong trinh\n");
            exit(0);
            break;
        default: break;
    }
}
void Phep_Cong() {
    int a,b;
    printf("Vui long nhap a: "); scanf("%d", &a);
    printf("Vui long nhap b: "); scanf("%d", &b);
    printf("-> Dap an: %d\n", a+b);
    printf("-------------------\n");
}
void Phep_Tru() {
    int a,b;
    printf("Vui long nhap a: "); scanf("%d", &a);
    printf("Vui long nhap b: "); scanf("%d", &b);
    printf("-> Dap an: %d\n", a-b);
    printf("-------------------\n");
}
void Phep_Nhan() {
    int a,b;
    printf("Vui long nhap a: "); scanf("%d", &a);
    printf("Vui long nhap b: "); scanf("%d", &b);
    printf("-> Dap an: %d\n", a*b);
    printf("-------------------\n");
}
void Phep_Chia() {

    float a,b;
    printf("Vui long nhap a: "); scanf("%d", &a);
    printf("Vui long nhap b: "); scanf("%d", &b);
    printf("-> Dap an: %.2f\n", a/b);
    printf("-------------------\n");
}

//Bai 3
void Menu_Chon_Hinh(){
    int chon;
    printf("Bai 3: Vui long chon hinh:\n");
    printf("[1] Hinh chu nhat rong\n");
    printf("[2] Hinh chu nhat dac\n");
    printf("[3] Hinh tam giac can rong\n");
    printf("[4] Hinh tam giac can dac\n");
    printf("[5] Thoat\n");
    printf("Chon: ");
    scanf("%d", &chon);
    switch (chon) {
        case 1:
            printf("[Hinh chu nhat rong]\n");
            Hinh_Chu_Nhat_Rong();
            break;
        case 2:
            printf("[Hinh chu nhat dac]\n");
            Hinh_Chu_Nhat_Dac();
            break;
        case 3:
            printf("[Hinh tam giac can rong]\n");
            Hinh_Tam_Giac_Can_Rong();
            break;
        case 4:
            printf("[Hinh tam giac can dac]\n");
            Hinh_Tam_Giac_Can_Dac();
            break;
        default: break;
    }
}

void Hinh_Chu_Nhat_Rong(){
    int r,h;
    printf("Vui long nhap chieu rong: "); scanf("%d", &r);
    printf("Vui long nhap chieu cao: "); scanf("%d", &h);
    //rong
    int i1=0;
    int time=0;
    for(;;)
    {
        i1++;
        printf("x");
        if(i1==r)
        {
           // printf("\nx");
            for(int i=1; i<h;i++)
            {
                if(i==h-1)
                {
                    printf("\n");
                    for(int lmao=0; lmao<r; lmao++)
                    {
                        printf("x");
                    }

                }else
                {
                    printf("\nx");
                    for(int f=2; f<r;f++)
                    {

                        printf(" ");
                        if(f==r-1)
                        {
                            printf("x");
                        }
                    }
                }
            }
            break;
        }
    }
}

void Hinh_Chu_Nhat_Dac(){
    int r,h;
    printf("Vui long nhap chieu rong: "); scanf("%d", &r);
    printf("Vui long nhap chieu cao: "); scanf("%d", &h);
    for(int i=0; i<h;i++)
    {
        for(int a=0; a <r; a++)
        {
            printf("x");
            if(a==r-1)
            {
                printf("\n");
            }
        }
    }
}

void Hinh_Tam_Giac_Can_Rong(){
    //Tham khao internet
    int h;
    printf("Vui long nhap chieu cao: "); scanf("%d", &h);
     for(int i = 1; i <= h; ++i)
     {
        for(int a = 1; a <= h + i - 1; ++a)
        {
            printf((a == h - i + 1 || a == h + i - 1 || i == h) ? "%c" : " ", 120);
        }
        putchar('\n');
     }
    printf("\n");
}

void Hinh_Tam_Giac_Can_Dac(){
    //Tham khao internet
     int h;
     printf("Vui long nhap chieu cao: "); scanf("%d", &h);
      for(int i = 1; i <= h; ++i)
      {
        for(int a = 1; a <= h + i - 1; ++a)
        {
            printf((a < h - i + 1) ? " " : "%c", 120);
        }
        putchar('\n');
     }
}

//Bai 4
void Menu_Tong(){
    int chon;
    printf("Vui long chon chuc nang:\n");
    printf("[1] Cuu chuong\n");
    printf("[2] Phep toan\n");
    printf("[3] Hinh hoc\n");
    printf("[4] Thoat\n");
    printf("Chon: ");
    scanf("%d", &chon);
    switch (chon)
    {
        case 1:
            printf("[Cuu chuong]\n");
            Menu_Bang_Cuu_Chuong(); //Bai 1
            break;
        case 2:
            printf("[Phep toan]\n");
            Menu_Phep_Toan(); //Bai 2
            break;
        case 3:
            printf("[Hinh hoc]\n");
            Menu_Chon_Hinh(); //Bai 3 (Co tham khao internet: hinh tam giac rong va tam giac dac)
            break;
        case 4:
            printf("[Nhan Enter de thoat]\n");
            exit(0);
            break;
        default: break;
    }
}
