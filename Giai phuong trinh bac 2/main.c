#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //KHAI BÁO BIẾN
    char reset=1;
    double a,b,c,denta,x,x1,x2;

    while(reset==1)
    {
    //ĐƯA GIÁ TRỊ CỦA CÁC HỆ SỐ VÀO
    printf("Nhap cac he so phuong trinh can bac 2 cua ban\n");
    printf("a:");
    scanf("%lf",&a);
    printf("b:");
    scanf("%lf",&b);
    printf("c:");
    scanf("%lf",&c);
    printf("=============================================\n");

    //TÍNH ĐENTA
    denta=b*b-(4*a*c);
    printf("denta = %f ",denta);

    //CÁC TRƯỜNG HỢP ĐENTA
    //Nếu đenta<0
    if(denta<0.0)
    {
        printf("Phuong trinh vo nghiem\n");
    }
    //Nếu đenta=0
    else if(denta==0.0)
    {
        x=-b/(2*a);
        printf("Phuong trinh co nghiem kep la: x = %f",x);
    }
    //Nếu đenta>0
    else
    {
        x1=((-b)+(sqrt(denta)))/(2*a);
        x2=((-b)-(sqrt(denta)))/(2*a);
        printf("Phuong trinh co 2 nghiem rieng biet la:\n");
        printf("x1 = %f \n",x1);
        printf("x2 = %f \n",x2);
    }
    printf("Ban muon tinh tiep?, chon 1 neu tinh tiep, 2 neu khong: ");
    scanf("%d",&reset);
    }
    return 0;
}
