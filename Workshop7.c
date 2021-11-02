#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Author: Huynh Chi Hai CE160053
//02-11-2021
//Workshop 7 - Ma tran
bool isMatran1 = false;
int main()
{
    char chon;
    char chon_con;
    int m = 0, n = 0, p = 0, q = 0;
    int ma_tran1[10][10];
    int ma_tran2[10][10];
    int ma_tran_kq[10][10];

    while (1)
    {
        printf("[Author: Huynh Chi Hai - Workshop 7 - Ma tran]\n");
        printf("-\n");
        printf("  |1| Nhap ma tran\n");
        printf("  |2| In ma tran kich thuoc mxn\n");
        printf("  |3| Cong hai ma tran mxn + pxq\n");
        printf("  |4| Xoa man hinh\n");
        printf("  |5| Thoat\n");
        printf("Chon: ");
        scanf("%c", &chon);
        fflush(stdin);
        switch (chon)
        {
        case '1':
            printf("Ban da chon nhap ma tran\n");
            Bai1(&m, &n, &ma_tran1, &ma_tran_kq);
            break;
        case '2':
            printf("Ban da chon in ma tran kich thuoc %dx%d\n", m, n);
            Bai2(&m, &n, &ma_tran1, &ma_tran_kq);
            break;
        case '3':
            printf("Ban da chon cong hai ma tran\n");
            if (isMatran1 == true)
            {
                printf("Ma tran 1 da ton tai, ban co muon su dung lai khong?\n");
                printf("|1| Co\n");
                printf("|2| Khong\n");
                printf("|3| Xoa ma tran 1\n");
                printf("Chon: ");
                scanf("%c", &chon_con);
                switch (chon_con)
                {
                case '1':
                    fflush(stdin);
                    printf("Nhap ma tran 2\n");
                    Bai3(&m, &n, &p, &q, &ma_tran1, &ma_tran2, &ma_tran_kq);
                    break;
                case '2':
                    printf("Nhap ma tran 1\n");
                    Bai1(&m, &n, &ma_tran1, &ma_tran_kq);
                    fflush(stdin);
                    printf("-\n");
                    printf("Nhap ma tran 2\n");
                    Bai3(&m, &n, &p, &q, &ma_tran1, &ma_tran2, &ma_tran_kq);
                    break;
                case '3':
                    printf("Da xoa ma tran 1\n");
                    isMatran1 = false;
                    break;
                default:
                    break;
                }
            }
            else
            {
                printf("Nhap ma tran 1\n");
                Bai1(&m, &n, &ma_tran1, &ma_tran_kq);
                fflush(stdin);
                printf("-\n");
                printf("Nhap ma tran 2\n");
                Bai3(&m, &n, &p, &q, &ma_tran1, &ma_tran2, &ma_tran_kq);
            }
            break;
        case '4':
            system("cls");
            break;
        case '5':
            printf("Nhan Enter de thoat");
            exit(0);
            break;
        default:
            printf("Nhap sai dinh dang, vui long nhap lai!");
            printf("\n\n");
            break;
        }
        printf("\n");
        fflush(stdin);
    }
    return 0;
}

//Viet ham nhap ma tran mxn
void Bai1(int *m, int *n, int ma_tran1[10][10], int ma_tran_kq[10][10])
{
    int so_hang = *m;
    int so_cot = *n;
    printf("So hang: ");
    scanf("%d", &so_hang);
    printf("So cot: ");
    scanf("%d", &so_cot);
    *m = so_hang;
    *n = so_cot;
    if (so_hang != 0 && so_cot != 0 && so_hang != 1 && so_cot != 1)
    {
        printf("Ma tran cua ban co dang: %dx%d\n", so_hang, so_cot);
        for (int i = 0; i < so_hang; i++)
        {
            for (int j = 0; j < so_cot; j++)
            {
                printf("Hang %d cot %d: ", i, j);
                scanf("%d", &ma_tran1[i][j]);
                ma_tran_kq[i][j] = ma_tran1[i][j];
            }
        }
        isMatran1 = true;
    }
    else
    {
        printf("Ma tran khong hop le!\n");
    }
}

//In ra ma tran mxn
void Bai2(int *m, int *n, int ma_tran1[10][10], int ma_tran_kq[10][10])
{
    int so_hang = *m;
    int so_cot = *n;
    printf("Ma tran cua ban:\n");
    for (int i = 0; i < so_hang; i++)
    {
        for (int j = 0; j < so_cot; j++)
        {
            printf("%d ", ma_tran_kq[i][j]);
        }
        printf("\n");
    }
}

//Cong 2 ma tran mxn + pxq
void Bai3(int *m, int *n, int *p, int *q, int ma_tran1[10][10], int ma_tran2[10][10], int ma_tran_kq[10][10])
{
    int so_hang = *p;
    int so_cot = *q;
    printf("So hang: ");
    scanf("%d", &so_hang);
    printf("So cot: ");
    scanf("%d", &so_cot);
    *p = so_hang;
    *q = so_cot;

    if (*p == *m && *q == *n)
    {
        if (so_hang != 0 && so_cot != 0 && so_hang != 1 && so_cot != 1)
        {
            printf("Ma tran cua ban co dang: %dx%d\n", so_hang, so_cot);
            for (int i = 0; i < so_hang; i++)
            {
                for (int j = 0; j < so_cot; j++)
                {
                    printf("Hang %d cot %d: ", i, j);
                    scanf("%d", &ma_tran2[i][j]);
                }
            }
            printf("Ket qua MA TRAN 1 + MA TRAN 2:\n");
            for (int i = 0; i < so_hang; i++)
            {
                for (int j = 0; j < so_cot; j++)
                {
                    ma_tran_kq[i][j] = ma_tran1[i][j] + ma_tran2[i][j];
                    printf("%d ", ma_tran_kq[i][j]);
                }
                printf("\n");
            }
        }else
        {
            printf("Ma tran khong hop le!\n");
        }
    }
    else
    {
        printf("Khong the cong 2 ma tran nay!\n");
    }
}
