#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//Huynh Chi Hai (CE160053)
//12-10-2021
//workshop_4
int main()
{

    while(1)
    {
        float a, b, c, P, kq;

        int chon=0;
        printf("[1] Giai phuong trinh bac 1\n");
        printf("[2] Chu vi va dien tich tam giac\n");
        printf("[3] Thoat\n");
        printf("Chon: "); scanf("%d", &chon);

        switch (chon)
        {
            case 1:
                printf("[Giai phuong trinh bac 1]\n");
                printf("Nhap a: "); scanf("%f", &a);
                printf("Nhap b: "); scanf("%f", &b);
                Bac_mot(&a, &b, &kq);
                if(a==0 && b == 0)
                {
                    printf("Phuong trinh vo so nghiem\n");
                } else if(a==0&& b != 0)
                {
                    printf("Phuong trinh vo nghiem\n");
                }else
                {
                     printf("Phuong trinh co nghiem duy nhat: %.1f\n", kq);
                }
                break;

            case 2:
                printf("[1] Ban muon nhap 3 canh tam giac\n");
                printf("[2] Ban muon tinh chu vi\n");
                printf("[3] Ban muon tinh dien tich\n");
                printf("[4] Back\n");
                printf("Chon: "); scanf("%d", &chon);
                switch (chon)
                {
                    case 1:
                        printf("Nhap canh 1: "); scanf("%f", &a);
                        printf("Nhap canh 2: "); scanf("%f", &b);
                        printf("Nhap canh 3: "); scanf("%f", &c);
                        break;

                    case 2:
                        printf("[Tinh chu vi tam giac]\n");
                        Chu_vi_tam_giac(&a, &b, &c, &kq);
                        printf("Ket qua: %.1f\n", kq);
                        break;

                    case 3:
                        printf("[Tinh dien tich tam giac theo cong thuc Heron]\n");
                        Dien_tich_tam_giac(&a, &b, &c, &P, &kq);
                        printf("Chu vi: %.1f | Dien tich: %.1f\n", P, kq);
                        break;

                    case 4:
                        break;

                    default:
                        break;
                }

                break;

            case 3:
                printf("Nhan Enter de thoat!");
                exit(0);
                break;

            default:
                break;
        }
    }

    getch();
    return 0;
}
//Phuong trinh bac 1
void Bac_mot(float*a, float*b, float*kq){
    *kq = -*b / *a;
}

//Tinh chu vi
void Chu_vi_tam_giac(float*a, float*b, float*c, float*kq){
    *kq = *a + *b + *c;
}

//Dien tich theo heron
void Dien_tich_tam_giac(float*a, float*b, float*c, float*P, float*kq){
    *P = (*a + *b + *c)/2;
    *kq = sqrt( (*P)*(*P-*a)*(*P-*b)*(*P-*c) );
}
