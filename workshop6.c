#include <stdio.h>

int main()
{
    int chon;
    while (1)
    {
        printf("[Huynh Chi Hai]\n");
        printf("|1| Bo ky tu du thua\n");
        printf("|2| Dem tu\n");
        printf("|3| Chinh van ban\n");
        printf("|4| Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);
        if(chon > 0 && chon < 10)
        {
            switch (chon)
            {
            case 1:
                printf("Ban da chon bo ky tu du thua\n");
                fflush(stdin);
                Bai1();
                printf("\n\n");
                break;
            case 2:
                printf("Ban da chon dem tu\n");
                fflush(stdin);
                Bai2();
                printf("\n\n");
                break;
            case 3:
                printf("Ban da chon chinh van ban\n");
                fflush(stdin);
                Bai3();
                printf("\n\n");
                break;
            case 4:
                printf("Nhan Enter de thoat");
                exit(0);
                break;
            default:
                break;
            }
        }
        else
        {
            printf("Nhap sai dinh dang, vui long nhap lai!\n");
            break;
        }
    }
}

void Bai1()
{
    char chuoi[250];
    printf("Nhap van ban: ");
    scanf("%[^\n]*c%", &chuoi);
    int length = strlen(chuoi);
    Dcharacter(&chuoi, &length);
}
void Dcharacter(char *chuoi, int *length)
{
    int loc[250] = {0};
    for (int i = 0; i < *length; i++)
    {
        loc[i] = tolower(chuoi[i]);
    }
    printf("Ket qua: ");
    for (int i = 0; i < *length; i++)
    {
        if (loc[i] > 0)
        {
            if (loc[i] != loc[i + 1])
            {
                printf("%c", loc[i]);
            }
        }
    }
}

void Bai2()
{
    char chuoi[100];
    printf("Nhap van ban: ");
    scanf("%[^\n]*c%", &chuoi);
    int length = strlen(chuoi);
    Dem_tu(&chuoi, &length);
}
void Dem_tu(char *chuoi, int *length)
{
    int tu = 0;
    int ky_tu[100] = {0};

    for (int i = 0; i < *length; i++)
    {
        ky_tu[i] = tolower(chuoi[i]);
    }
    for (int i = 0; i < *length; i++)
    {
        if (ky_tu[i] == 32 && ky_tu[i + 1] >= 97 && ky_tu[i + 1] <= 122)
        {
            tu = tu + 1;
        }
        else if (ky_tu[i] == NULL)
        {
            tu = 0;
        }
    }
    printf("So tu: %d\n", tu + 1);
}

void Bai3()
{
    char chuoi[100];
    printf("Nhap van ban: ");
    scanf("%[^\n]*c%", &chuoi);
    int length = strlen(chuoi);
    Chinh_van_ban(&chuoi, &length);
}

void Chinh_van_ban(char *chuoi, int *length)
{
    int ky_tu[100] = {0};
    int in_hoa[100] = {0};
    for (int i = 0; i < *length; i++)
    {
        if (chuoi[i] >= 65 && chuoi[i] <= 90)
        {
            in_hoa[i] = chuoi[i];
            ky_tu[i] = tolower(chuoi[i]);
            ky_tu[0] = toupper(chuoi[0]);
        }
        else
        {
            ky_tu[i] = tolower(chuoi[i]);
            ky_tu[0] = toupper(chuoi[0]);
        }
    }
    printf("Van ban: ");
    for (int i = 0; i < *length; i++)
    {
        if (ky_tu[i] != ky_tu[i + 1])
        {
            if(ky_tu[i] - 32 == in_hoa[i] && ky_tu[i-1] == 32)
            {
                ky_tu[i] = in_hoa[i];
            }
            printf("%c", ky_tu[i]);
        }
    }
}
