#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    while (1)
    {
        float a, b, c, d, k, delta, x, x1, x2;
        printf ("__________________________________________\n\n");
        printf("[1] Phuong trinh bac 1\n");
        printf("[2] Phuong trinh bac 2\n");
        printf("[3] Phuong trinh bac 3\n");
        printf("[4] Phuong trinh trung phuong\n");
        printf("[5] He phuong trinh bac nhat 2 an\n");
        printf("[6] He phuong trinh bac nhat 3 an\n");
        printf("[7] Bat phuong trinh bac 2\n");
        printf("[8] Thoat\n");
        printf ("__________________________________________\n\n");
        printf("Chon: ");
        int chon_pt;
        scanf("%d", &chon_pt);
        printf ("\n\n");

        switch (chon_pt)
        {
        // Bac 1
        case 1:
            printf("[Ban da chon phuong trinh bac 1: ax + b = 0]\n");
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);
            Bac_mot(&a, &b, &c);
            printf("\n\n");
            break;

        // Bac 2
        case 2:
            printf("[Ban da chon phuong trinh bac 2: ax^2 + bx + c = 0]\n");
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);
            printf("Nhap c: ");
            scanf("%f", &c);
            if(a == 0)
            {
                printf("Ban da nhap a = 0 nen chuong trinh se duoc dua ve dang bac 1 ");
                Bac_mot(&b, &c, &c);
            }
            else
            {
                Bac_hai(&a, &b, &c, &delta);
            }
            printf("\n\n");
            break;

        // Bac 3
        case 3:
            printf("[Ban da chon phuong trinh bac 3: ax^3 + bx^2 + cx + d = 0]\n");
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);
            printf("Nhap c: ");
            scanf("%f", &c);
            printf("Nhap d: ");
            scanf("%f", &d);
            if(a == 0)
            {
                printf("Ban da nhap a = 0 nen chuong trinh se duoc dua ve dang bac 2 ");
                Bac_hai(&b, &c, &d, &delta);
            }
            else
            {
                Bac_ba(&a, &b, &c, &d, &k, &delta);
            }
            printf("\n\n");
            break;

        // Bac 4 trung phuong
        case 4:
            printf("[Ban da chon phuong trinh trung phuong: ax^4 + bx^2 + c= 0]\n");
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);
            printf("Nhap c: ");
            scanf("%f", &c);
            if(a == 0)
            {
                printf("Ban da nhap a = 0 nen chuong trinh se duoc dua ve dang bac 2 ");
                int f = 0;
                Bac_hai(&b, &f, &c, &delta);
            }
            else
            {
                Bac_bon_trung_phuong(&a, &b, &c, &delta);
            }
            printf("\n\n");
            break;
        case 5:
            printf ("[ Ban da chon he phuong trinh bac nhat 2 an\n");
            he_2_an ();
            break;
        case 6:
            printf ("[ Ban da chon he phuong trinh bac nhat 3 an\n");
            he_3_an ();
            break;

        case 7:
        {
            printf ("ban da chon bat phuong trinh bac 2 \n ");
            printf ("moi ban nhap he so cua phuong trinh:\n");
            printf("Nhap a: ");
            scanf("%f", &a);
            printf("Nhap b: ");
            scanf("%f", &b);
            printf("Nhap c: ");
            scanf("%f", &c);
            bat_Pt_bac_hai(&a, &b, &c);
            break;

        }

        case 8:
            printf("Nhan Enter de thoat!");
            exit(0);
        default:
            printf ("moi ban nhap lai\n");
            break;
        }
    }

    getch();
    return 0;
}


//________________________________________________________________________________________________________________________________________

// bat phuong trinh bac hai

void bat_Pt_bac_hai(float *a, float *b, float *c)
{

    float x,x1,x2,delta;

    delta = pow((*b), 2) - (4 * ((*a) * (*c)));

    if (delta == 0)
    {
        x = (-*b) / (2 * (*a));

    }
    else
    {
        x1 = (-*b + sqrt(delta)) / (2 * (*a));
        x2 = (-*b - sqrt(delta)) / (2 * (*a));
    }

    if (x2 <= x1)
    {
        float tm = x2;
        x2 = x1;
        x1 = tm;
    }
    while (1==1)
    {


        int chon_pt;
        printf ("moi ban chon loai phuong trinh can tinh\n");
        printf("[1] ax^2 + bx + c > 0\n");
        printf("[2] ax^2 + bx + c < 0\n");
        printf("[3] ax^2 + bx + c >= 0\n");
        printf("[4] ax^2 + bx + c <=0\n");
        printf("[5] Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon_pt);

        if (chon_pt==1)

        {
            printf(" %.2fx^2 + %.2fx + %.2f > 0\n",*a,*b,*c);
            if (delta <0)
            {
                if (*a >0)
                    printf (" All real numbers\n\n");
                else if (*a<0)
                    printf (" No solution");
            }
            else if (delta==0)
            {
                printf ("x different %f\n\n",x);
            }
            else  if  (delta>0)
            {
                if (*a<0)
                {
                    printf ("%f < x < %f\n\n",x1,x2);
                }
                else if (*a>0)
                {
                    printf ("x < %f and %f < x\n\n", x1,x2);
                }
            }

        } //case1
        else if (chon_pt==2)
        {
            printf(" %.2fx^2 + %.2fx + %.2f < 0\n",*a,*b,*c);
            if (delta <0)
            {
                if (*a <0)
                    printf (" All real numbers\n\n");
                else if (*a>0)
                    printf (" No solution\n");
            }
            else if (delta==0)
            {
                printf ("x different %f\n\n",x);
            }
            else  if  (delta>0)
            {
                if (*a>0)
                {
                    printf ("%f < x < %f\n\n",x1,x2);
                }
                else if (*a<0)
                {
                    printf ("x < %f and %f < x\n\n", x1,x2);
                }
            }

        } //case 2

        else if (chon_pt==3)
        {
            printf(" %.2fx^2 + %.2fx + %.2f >= 0\n",*a,*b,*c);
            if (delta <0)
            {
                if (*a >0)
                    printf (" All real numbers\n\n");
                else if (*a<0)
                    printf (" No solution");
            }
            else if (delta==0)
            {
                printf ("All real numbers\n\n");
            }
            else  if  (delta>0)
            {
                if (*a<0)
                {
                    printf ("%f <= x <= %f\n\n",x1,x2);
                }
                else if (*a>0)
                {
                    printf ("x <= %f and %f <= x\n\n", x1,x2);
                }
            }

        } //case3
        else if (chon_pt==4)
        {
            printf(" %.2fx^2 + %.2fx + %.2f <= 0\n",*a,*b,*c);
            if (delta <0)
            {
                if (*a <0)
                    printf (" All real numbers\n\n");
                else if (*a>0)
                    printf (" No solution\n\n");
            }
            else if (delta==0)
            {
                printf ("All real numbers\n\n",x);
            }
            else  if  (delta>0)
            {
                if (*a>0)
                {
                    printf ("%f < x < %f\n\n",x1,x2);
                }
                else if (*a<0)
                {
                    printf ("x < %f and %f < x\n\n", x1,x2);
                }
            }

        } //case 4
        else if (chon_pt==5)
        {
            printf("tro ve menu chinh\n\n");
            break;
        }
        else printf ("moi ban nhap lai \n");
    }

}//cua void


//_________________________________________________________________________________________________________________________________________
//he phuong trinh 2 an so
void he_2_an()
{
    float a1, b1, c1, a2, b2, c2;
    float Del, Delx, Dely, x, y;
    printf("al*x + b1*y = cl\n");
    printf ("a2*x + b2*y = c2\n");
    printf("\nNhap al: ");
    scanf("%f",&a1);
    printf("\nNhap bl: ");
    scanf("\n%f",&b1);
    printf("\nNhap cl: ");
    scanf("\n%f",&c1);
    printf("\nNhap a2: ");
    scanf("\n%f",&a2);
    printf("\nNhap b2: ");
    scanf("\n%f",&b2);
    printf("\nNhap c2: ");
    scanf("\n%f",&c2);
    Del = a1 * b2 - a2 * b1;
    Delx = c1 * b2 - c2 * b1;
    Dely = a1 * c2 - a2 * c1;
    printf ("\n\n");
    printf ("%.2fx + %2.fy = %2.f\n",a1, b1, c1);
    printf ("%.2fx + %2.fy = %2.f\n",a2, b2, c2);
    printf ("\n\n");
    if (Del == 0)
    {
        if (Delx + Dely == 0)
        {
            printf("He phuong trinh co vo so nghiem\n\n");
        }
        else
        {
            printf("He phuong trinh vo nghiem\n\n");
        }
    }
    else
    {
        x = Delx / Del;
        y = Dely / Del;
        printf("He phuong trinh co nghiem x = %f", x);
        printf("\nHe phuong trinh co nghiem y = %f\n\n", y);
    }
}

//___________________________________________________________________________________________________________________________

//he phuong trinh 3 an

void he_3_an()
{
    float a11, a12, a13, a21, a22, a23, a31, a32, a33, b1, b2, b3, x, y, z, d, dx, dy, dz;
    printf("a1*x + b1*y + c1*z = d1\n");
    printf("a2*x + b2*y + c2*z = d2\n");
    printf("a3*x + b3*y + c3*z = d3\n");

    printf("nhap cac he so phuong trinh 1:\n");
    printf("\nNhap al: ");
    scanf_s("%f", &a11);
    printf("\nNhap b1: ");
    scanf_s("%f",  &a12);
    printf("\nNhap c1: ");
    scanf_s("%f", &a13);
    printf("\nNhap d1: ");
    scanf_s("%f",&b1);

    printf("nhap cac he so phuong trinh 2:\n");
    printf("\nNhap a2: ");
    scanf_s("%f", &a21);
    printf("\nNhap b2: ");
    scanf_s("%f",  &a22);
    printf("\nNhap c2: ");
    scanf_s("%f", &a23);
    printf("\nNhap d2: ");
    scanf_s("%f",&b2);

    printf("nhap cac he so phuong trinh 3:\n");
    printf("\nNhap a3: ");
    scanf_s("%f", &a31);
    printf("\nNhap b3: ");
    scanf_s("%f",  &a32);
    printf("\nNhap c3: ");
    scanf_s("%f", &a33);
    printf("\nNhap d3: ");
    scanf_s("%f",&b3);


    d = a11*a22*a33 + a12*a23*a31 + a21*a32*a13 - a13*a22*a31 - a12*a21*a33 - a11*a32*a23;
    dx = b1*a22*a33 + a12*a23*b3 + b2*a32*a13 - a13*a22*b3 - a12*b2*a33 - a23*a32*b1;
    dy = a11*b2*a33 + b1*a23*a31 + a21*b3*a13 - a13*b2*a31 - b1*a21*a33 - a23*b3*a11;
    dz = a11*a22*b3 + a12*b2*a31 + a21*a32*b1 - b1*a22*a31 - a12*a21*b3 - b2*a32*a11;
    printf ("\n\n");
    printf ("%.2fx + %2.fy + %2.fz = %2.f\n",a11, a12, a13,b1);
    printf ("%.2fx + %2.fy + %2.fz = %2.f\n",a21, a22, a23,b2);
    printf ("%.2fx + %2.fy + %2.fz = %2.f\n",a31, a32, a33,b3);
    printf ("\n\n");
    if (d == 0)
    {
        if ((dx == 0) && (dy == 0) && (dz == 0))
            printf("he vo so nghiem\n\n");
        else printf("he vo nghiem\n\n");
    }
    else
    {
        printf("he co nghiem la:\n x=%.2f \n y=%.2f \n z=%.2f\n\n", dx / d, dy / d, dz / d);

    }
}

//___________________________________________________________________________________________________________________________
// Phuong trinh bac 1
void Bac_mot(float *a, float *b, float *c)
{
    printf("ax + b = 0 <=> ");
    printf("%.1fx + %.1f = 0\n", *a, *b);
    if (*a == 0 && *b == 0)
    {
        printf("=> Phuong trinh co vo so nghiem ]\n");
    }
    else if (*a == 0 && *b != 0)
    {
        printf("=> Phuong trinh vo nghiem ]\n");
    }
    else
    {
        *c = -(*b) / (*a);
        printf("=> Phuong trinh co nghiem duy nhat: x = %.1f\n", *c);
    }
}
//______________________________________________________________________________________________________________________________

// Phuong trinh bac 2
void Bac_hai(float *a, float *b, float *c, float *delta)
{
    // ax^2 + bx + c = 0
    printf("ax^2 + bx + c = 0 <=> ");
    printf("%.1fx^2 + %.1fx + %.1f = 0 <=> ", *a, *b, *c);
    *delta = pow((*b), 2) - (4 * ((*a) * (*c)));
    printf("Delta: %.2f\n", *delta);
    if (*delta < 0)
    {
        printf("=> Phuong trinh vo nghiem\n");
    }
    else if (*delta == 0)
    {
        float x = (-*b) / (2 * (*a));
        printf("=> Phuong trinh co nghiem kep: x1 = x2 = -b/2a = %.1f\n", x);
    }
    else
    {
        float x1 = (-*b + sqrt(*delta)) / (2 * (*a));
        float x2 = (-*b - sqrt(*delta)) / (2 * (*a));
        printf("=> Phuong trinh co hai nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    // gia tri lon nhat, gia tri nho nhat
    float gt_x, gt_y;
    gt_x = (-*b) / (2 * (*a));
    gt_y = (-*delta) / (4 * (*a));

    if (*a < 0)
    {
        printf("gia tri lon nhat y= %f tai x=%f ", gt_y, gt_x);
    }
    else
    {
        printf("gia tri nho nhat y= %f tai x=%f ", gt_y, gt_x);
    }
}

//____________________________________________________________________________________________________________________________________________________

// Phuong trinh bac 3
void Bac_ba(float *a, float *b, float *c, float *d, float *k, float *delta)
{
    // ax^3 + bx^2 + cx + d = 0
    printf("ax^3 + bx^2 + cx + d = 0 <=> ");
    printf("%.1fx^3 + %.1fx^2 + %.1fx + %.1f  = 0\n", *a, *b, *c, *d);
    *delta = pow(*b, 2) - 3 * (*a) * (*c);
    float deltaphay = pow(*b, 2) - 3 * (*a) * (*c);
    if (*delta == 0)
    {
        *k = 0;
    }
    else
    {
        *k = (9 * (*a) * (*b) * (*c) - (2 * pow(*b, 3)) - (27 * pow(*a, 2) * (*d))) / (2 * sqrt(pow(fabs(*delta), 3)));
    }
    printf("k = %.2f; ", *k);
    printf("Delta = %.2f\n", *delta);
    if (*delta > 0)
    {
        if (fabs(*k) <= 1)
        {
            float x1 = (2 * sqrt(*delta) * cos(acos(*k) / 3) - *b) / (3 * (*a));
            float x2 = (2 * sqrt(*delta) * cos(acos(*k) / 3 - (2 * 3.14) / 3) - *b) / (3 * (*a));
            float x3 = (2 * sqrt(*delta) * cos(acos(*k) / 3 + (2 * 3.14) / 3) - *b) / (3 * (*a));
            printf("=> Phuong trinh co 3 nghiem: ");
            printf("x1 = %.2f; x2 = %.2f; x3 = %.2f\n", x1, x2, x3);
        }
        else if (fabs(*k) > 1)
        {
            float x = ((sqrt(*delta) * fabs(*k)) / (3 * (*a) * (*k)) * ((cbrt(fabs(*k) + sqrt(pow(*k, 2) - 1))) + (cbrt(fabs(*k) - sqrt(pow(*k, 2) - 1))))) - (*b / (3 * (*a)));
            printf("=> Phuong trinh co 1 nghiem duy nhat: ");
            printf("x = %.2f\n", x);
        }
    }
    else if (*delta == 0)
    {
        float x = ((-*b) + (cbrt((pow(*b, 3) - (27 * pow(*a, 2) * (*d)))))) / (3 * (*a));
        printf("=> Phuong trinh co nghiem: ");
        printf("x = %.2f\n", x);
    }
    else if (*delta < 0)
    {
        float x = (((sqrt(fabs(*delta))) / (3 * (*a))) * ((cbrt(*k + sqrt(pow(*k, 2) + 1))) + (cbrt(*k - sqrt(pow(*k, 2) + 1))))) - ((*b) / (3 * (*a)));
        printf("=> Phuong trinh co 1 nghiem duy nhat: ");
        printf("x = %.2f\n", x);
    }

    //-----------cuc dai cuc tieu cua ham so bac 3-------------

    float a1 = (-(*b) + sqrt(pow(*b, 2) - (3 * (*a) * (*c)))) / (3 * (*a));
    float a2 = (-(*b) - sqrt(pow(*b, 2) - (3 * (*a) * (*c)))) / (3 * (*a));
    //   sap xep lai thu tu x tang dan
    if (a2 <= a1)
    {
        float tm = a2;
        a2 = a1;
        a1 = tm;
    }

    float b1 = (*a) * pow(a1, 3) + (*b) * pow(a1, 2) + (*c) * a1 + (*d);
    float b2 = (*a) * pow(a2, 3) + (*b) * pow(a2, 2) + (*c) * a2 + (*d);

    if (deltaphay <= 0)
    {
        printf("  => phuong trinh khong co cuc tri");
    }
    else if (deltaphay > 0)
    {

        if (*a > 0)
        {
            printf(" cuc dai x= %f\n", a1);
            printf(" cuc dai y= %f\n", b1);
            printf("----------------------\n");
            printf(" cuc tieu x= %f\n", a2);
            printf(" cuc tieu y= %f\n", b2);
        }
        else
        {
            printf(" cuc tieu x= %f\n", a1);
            printf(" cuc tieu y= %f\n", b1);
            printf("----------------------\n");
            printf(" cuc dai x= %f\n", a2);
            printf(" cuc dai y= %f\n", b2);
        }
    }
}
//________________________________________________________________________________________________________________________________________________________________________

// Phuong trinh bac 4 trung phuong
void Bac_bon_trung_phuong(float *a, float *b, float *c, float *delta)
{
    float t, t1, t2;
    *delta = (*b * (*b)) - (4 * ((*a) * (*c)));
    if (*delta < 0)
    {
        printf("=> Phuong trinh nay vo nghiem\n");
    }
    else if (*delta == 0)
    {
        t = -(*b) / 2 * (*a);
        if (t >= 0)
        {
            printf("=> Phuong trinh co 2 nghiem: \n");
            printf("x1 = %.2f; x2 = %.2f\n", sqrt(t), -sqrt(t));
        }
        else
        {
            printf("=> Phuong trinh nay vo nghiem\n");
        }
    }
    else
    {
        t1 = (-(*b) + sqrt(*delta)) / (2 * (*a));
        t2 = (-(*b) - sqrt(*delta)) / (2 * (*a));
        if (t1 < 0 && t2 >= 0)
        {
            printf("=> Phuong trinh co 2 nghiem: ");
            printf("x1 = %.2f; x2 = %.2f\n", sqrt(t2), -sqrt(t2));
        }
        else if (t2 < 0 && t1 >= 0)
        {
            printf("=> Phuong trinh co 2 nghiem: ");
            printf("x1 = %.2f; x2 = %.2f\n", sqrt(t1), -sqrt(t1));
        }
        else if (t1 >= 0 && t2 >= 0)
        {
            printf("=> Phuong trinh co 4 nghiem: ");
            printf("x1 = %.2f; x2 = %.2f; x3 = %.2f; x4 = %.2f\n", sqrt(t1), -sqrt(t1), sqrt(t2), -sqrt(t2));
        }
        else
        {
            printf("=> Phuong trinh nay vo nghiem\n");
        }
    }

    //_________________________cuc tri pt trung phuong_______________________

    float a1 = +sqrt(-(*b) / (2 * (*a)));
    float a2 = -sqrt(-(*b) / (2 * (*a)));
    float b1 = (*a) * pow(a1, 4) + (*b) * pow(a1, 2) + (*c);
    float b2 = (*a) * pow(a2, 4) + (*b) * pow(a2, 2) + (*c);
    float gt = (*c);
    if ((*a) * (*b) >= 0)
    {
        printf("phuong trinh co 1 cuc tri x =0\n\n");
        printf("gia tri cuc dai la y= %f", gt);
    }
    else
    {
        if (*a < 0)
        {
            printf("cuc tieu cua ham so x= 0\n");
            printf("gia tri cuc tieu la y= %f", gt);
            printf("cuc dai cua ham so x1= %f\n                   x2= %f\n", a1, a2);
            printf(" gia tri cuc dai y1= %f\n", b1);
            printf(" gia tri cuc dai y2= %f\n", b2);
        }
        else
        {
            printf("cuc dai cua ham so x= 0\n");
            printf("gia tri cuc dai la y= %f", gt);
            printf("cuc tieu cua ham so x= %f\n                   x= %f\n", a1, a2);
            printf(" gia tri cuc tieu y1= %f\n", b1);
            printf(" gia tri cuc tieu y2= %f\n", b2);
        }
    }
}
