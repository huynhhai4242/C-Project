#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Huynh Chi Hai CE160053
//23-10-2021
int main()
{
    int so, chon;
    time_t t = time(NULL);
    struct tm dongho = *localtime(&t);
    char chuoi[100];
    while(1)
    {

        printf("[WELCOME - WORKSHOP 5 MENU]\n");
        printf("[Author: Huynh Chi Hai] ");
        printf("[Today: %02d-%02d-%d]\n",dongho.tm_mday, dongho.tm_mon+1, dongho.tm_year+1900);
        printf("-\n");
        printf("|1| Doc chu\n");
        printf("|2| Qui doi co so\n");
        printf("|3| Xu ly chuoi\n");
        printf("|4| Bang dien tu\n");
        printf("|5| Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("Ban da chon doc chu\n");
            printf("Nhap so: ");
            scanf("%d", &so);
            Doc_chu(&so);
            printf("\n\n");
            break;
        case 2:
            printf("Ban da chon qui doi co so\n");
            printf("Nhap so: ");
            scanf("%d", &so);
            Qui_doi(&so);
            printf("\n\n");
            break;
        case 3:
            fflush(stdin);
            printf("Ban da chon xu ly chuoi\n");
            printf("Nhap chuoi: ");
            scanf("%[^\n]%*c", &chuoi);
            Xu_Ly_Chuoi(&chuoi);
            printf("\n\n");
            break;
        case 4:
            printf("Ban da chon bang dien tu FPT\n");
            Bang_dien_tu();
            printf("\n\n");
            break;
        case 5:
            printf("Nhan Enter de thoat");
            exit(0);
            break;
        default:
            break;
        }
    }

    getch();
    return 0;
}

//Bai 1
//Doc so thanh tieng Viet
void Doc_chu(int* so)
{
    // Tach so
    int phan_nguyen = *so;
    int phan_du;
    int a=0, b=0;
    while(phan_nguyen > 9)
    {
        a++;
        phan_nguyen = phan_nguyen / 10;
    }
    a++;
    int mang[a];
    phan_nguyen = *so;
    while(phan_nguyen > 9)
    {
        b++;
        phan_du = phan_nguyen % 10;
        phan_nguyen = phan_nguyen / 10;
        mang[b] = phan_du;
        if(phan_nguyen <= 9)
        {
            b++;
            mang[b] = phan_nguyen;
        }
    }

    //Sap xep
    int mang_dao[a];
    int dao = a;
    printf("Tach so: ");
    for (int i = 0; i < a; i++)
    {
        mang_dao[i] = mang[dao];
        dao = dao - 1;
        printf("%d ", mang_dao[i]);
    }
    printf("\n");

    //Doc chu

    if(*so <= 9 && *so >= 0)
    {
        printf("Doc so: ");
        Hang_don_vi(&phan_nguyen);
    }
    else
    {
        if(*so >= 100)
        {
            printf("Doc so: ");
            Hang_Tram(&a, &mang_dao);
        }
        if(*so < 100 && *so >= 10)
        {
            printf("Doc so: ");
            Hang_Chuc(&a, &mang_dao);
        }
    }
}
void Hang_Tram(int* a, int* mang_dao)
{
    char hang[2][5] = {"tram", "muoi"};
    if(mang_dao[1] == 0 && mang_dao[2] == 0)
    {
        switch (mang_dao[0])
        {
        case 1:
            printf("mot ");
            break;

        case 2:
            printf("hai ");
            break;

        case 3:
            printf("ba ");
            break;

        case 4:
            printf("bon ");
            break;

        case 5:
            printf("nam ");
            break;

        case 6:
            printf("sau ");
            break;

        case 7:
            printf("bay ");
            break;

        case 8:
            printf("tam ");
            break;

        case 9:
            printf("chin ");
            break;
        default:
            break;
        }
        printf("+ tram");
    }
    else
    {
        for(int i = 0; i < *a; i++)
        {
            if(i == 2)
            {
                switch (mang_dao[i])
                {
                case 1:
                    printf("mot");
                    break;

                case 2:
                    printf("hai");
                    break;

                case 3:
                    printf("ba");
                    break;

                case 4:
                    printf("bon");
                    break;

                case 5:
                    printf("nam");
                    break;

                case 6:
                    printf("sau");
                    break;

                case 7:
                    printf("bay");
                    break;

                case 8:
                    printf("tam");
                    break;

                case 9:
                    printf("chin ");
                    break;
                default:
                    break;
                }
            }
            else
            {
                if(mang_dao[i] == 0)
                {
                    printf("le + ");
                }
                else
                {
                    switch (mang_dao[i])
                    {
                    case 1:
                        printf("mot + ");
                        break;

                    case 2:
                        printf("hai + ");
                        break;

                    case 3:
                        printf("ba + ");
                        break;

                    case 4:
                        printf("bon + ");
                        break;

                    case 5:
                        printf("nam + ");
                        break;

                    case 6:
                        printf("sau + ");
                        break;

                    case 7:
                        printf("bay + ");
                        break;

                    case 8:
                        printf("tam + ");
                        break;

                    case 9:
                        printf("chin + ");
                        break;
                    default:
                        break;
                    }
                    printf("%s + ", hang[i]);
                }
            }
        }
    }
}
void Hang_Chuc(int* a, int* mang_dao)
{
    if(mang_dao[1] == 0)
    {
        switch (mang_dao[0])
        {
        case 1:
            printf("muoi ");
            break;

        case 2:
            printf("hai ");
            break;

        case 3:
            printf("ba ");
            break;

        case 4:
            printf("bon ");
            break;

        case 5:
            printf("nam ");
            break;

        case 6:
            printf("sau ");
            break;

        case 7:
            printf("bay ");
            break;

        case 8:
            printf("tam ");
            break;

        case 9:
            printf("chin ");
            break;
        default:
            break;
        }
        if(mang_dao[0] != 1)
        {
            printf("+ muoi");
        }
    }
    else
    {
        for(int i = 0; i < *a; i++)
        {
            if(i == 1)
            {
                switch (mang_dao[i])
                {
                case 1:
                    printf("mot");
                    break;

                case 2:
                    printf("hai");
                    break;

                case 3:
                    printf("ba");
                    break;

                case 4:
                    printf("bon");
                    break;

                case 5:
                    printf("nam");
                    break;

                case 6:
                    printf("sau");
                    break;

                case 7:
                    printf("bay");
                    break;

                case 8:
                    printf("tam");
                    break;

                case 9:
                    printf("chin ");
                    break;
                default:
                    break;
                }
            }
            else
            {
                if(mang_dao[0] == 1)
                {
                    printf("muoi + ");
                }
                else
                {
                    switch (mang_dao[i])
                    {
                    case 1:
                        printf("mot + ");
                        break;

                    case 2:
                        printf("hai + ");
                        break;

                    case 3:
                        printf("ba + ");
                        break;

                    case 4:
                        printf("bon + ");
                        break;

                    case 5:
                        printf("nam + ");
                        break;

                    case 6:
                        printf("sau + ");
                        break;

                    case 7:
                        printf("bay + ");
                        break;

                    case 8:
                        printf("tam + ");
                        break;

                    case 9:
                        printf("chin + ");
                        break;
                    default:
                        break;
                    }
                    if(mang_dao[1] != 0)
                    {
                        printf("muoi + ");
                    }
                    else
                    {
                        printf("muoi");
                    }
                }
            }
        }
    }
}
void Hang_don_vi(int* so)
{
    switch (*so)
    {
    case 0:
        printf("khong");
        break;
    case 1:
        printf("muoi");
        break;

    case 2:
        printf("hai");
        break;

    case 3:
        printf("ba");
        break;

    case 4:
        printf("bon");
        break;

    case 5:
        printf("nam");
        break;

    case 6:
        printf("sau");
        break;

    case 7:
        printf("bay");
        break;

    case 8:
        printf("tam");
        break;

    case 9:
        printf("chin");
        break;
    default:
        break;
    }
}


//Bai 2
//Qui doi co so: Thap phan -> nhi phan
void Qui_doi(int* so)
{
    int chon, nguyen=*so, du, i=0, a=0;
    while (nguyen != 0)
    {
        i++;
        nguyen = nguyen / 2;
    }
    int mang_du[i];
    int mang_dao[i];
    int dao = i;
    du = 0;
    nguyen = *so;
    printf("Thap phan: %d | ", *so);
    while (nguyen != 0)
    {
        du = nguyen % 2;
        nguyen = nguyen / 2;
        a++;
        mang_du[a] = du;
    }
    printf("Nhi phan: ");
    for (int b = 0; b < i; b++)
    {
        mang_dao[b] = mang_du[dao];
        dao = dao - 1;
        printf("%d", mang_dao[b]);
    }
}

//Bai 3
//Xu ly chuoi: Viet hoa chu cai dau tien trong chuoi
void Xu_Ly_Chuoi(char* chuoi)
{
    //Tham khao
    printf("Chuoi: %s ", chuoi);
    for (int i = 0; chuoi[i] != '\0'; i++)
    {
        if (chuoi[i] >= 'A' && chuoi[i] <= 'Z')
        {
            chuoi[i] += 32;
        }

        if (chuoi[i - 1] == ' ' || i == 0)
        {
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z')
            {
                chuoi[i] = chuoi[i] - 32;
            }
        }
    }
    printf("-> %s", chuoi);
}

//Bai 4
//Bang dien tu FPT
void Bang_dien_tu()
{
    printf("\n");
    char F1[] = {'*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*', '\0'};
    char F2[] = {'*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ', '\0'};
    char F3[] = {'*','*','*',' ',' ',' ',' ','*','*','*','*','*',' ',' ',' ',' ','*',' ',' ', '\0'};
    char F4[] = {'*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ', '\0'};
    char F5[] = {'*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ', '\0'};

    for(int i = 0; i <= 19; i++)
    {
        printf("%c", F1[i]);
    }
    printf("\n");
    for(int i = 0; i <= 19; i++)
    {
        printf("%c", F2[i]);
    }
    printf("\n");
    for(int i = 0; i <= 19; i++)
    {
        printf("%c", F3[i]);
    }
    printf("\n");
    for(int i = 0; i <= 19; i++)
    {
        printf("%c", F4[i]);
    }
    printf("\n");
    for(int i = 0; i <= 19; i++)
    {
        printf("%c", F5[i]);
    }
}
