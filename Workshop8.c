#include <stdio.h>
#include <stdlib.h>

//Author: Huynh Chi Hai CE160053
//Time: 09/11/2021
//Task: Workshop8
int main()
{
    int matrix[100][100];
    int m, n;
    char chon, new_file;

    FILE *check = fopen("MT.txt", "r");
    if(check == NULL)
    {
        printf("[Author: Huynh Chi Hai]\n");
        printf("File check: ERROR FILE NOT FOUND!\nDo you want create a new file?\n");
        printf("  |1| YES\n");
        printf("  |2| NO\n");
        printf("Choose: ", new_file);
        scanf("%c", &new_file);
        getchar();
        if(new_file == '1')
        {
            FILE *create_new = fopen("MT.txt", "w");
            fclose(create_new);
            printf("Create 'MT.txt' complete!");
        }else if(new_file == '2')
        {
            printf("Press Enter to exit!");
            exit(0);
        }
        printf("\n");
    }else
    {
        printf("File check: Detected 'MT.txt'\n");
    }
    fclose(check);

    while(1)
    {
        printf("-----------------------\n");
        printf("[Author: Huynh Chi Hai]\n");
        printf("Menu options\n");
        printf("  |1| Input matrix to txt file\n");
        printf("  |2| Read matrix from txt file\n");
        printf("  |3| Exit\n");
        printf("Choose: ");
        scanf("%c", &chon);
        getchar();
        switch(chon)
        {
        case '1':
            printf("-> Your option is %c\n", chon);
            printf("Row number: ");
            scanf("%d", &m);
            printf("Column number: ");
            scanf("%d", &n);
            intput_matrix(&m, &n, &matrix);
            break;
        case '2':
            printf("-> Your option is %c\n", chon);
            read_matrix();
            break;
        case '3':
            printf("Press Enter to exit!");
            exit(0);
            break;
        default:
            printf("Wrong format, please try again!\n");
            break;
        }
        fflush(stdin);
        printf("\n");
    }
    return 0;
}

//Input matrix and save in txt file
void intput_matrix(int*m, int*n, int matrix[100][100])
{
    FILE *f = fopen("MT.txt", "w");
    for(int i = 0; i < *m; i++)
    {
        for(int j = 0; j < *n; j++)
        {
            printf("Row [%d] Column [%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            fprintf(f, "%d ", matrix[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    printf("Import is complete\n");
}

//Get matrix of txt file and printf matrix in console
void read_matrix()
{
    FILE *read_file = fopen("MT.txt", "r");
    printf("Matrix from file MT.txt:\n");
    while(1)
    {
        char c = fgetc(read_file);
        if(c != EOF)
        {
            printf("%c", c);
        }
        else
        {
            break;
        }
    }
    fclose(read_file);
}
