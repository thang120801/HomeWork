#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //KHAI BÁO
    int input=0;

    //LẤY GIÁ TRỊ INPUT VÀO ĐỂ XEM INPUT CÓ PHẢI SỐ CHÍNH PHƯƠNG HAY KHÔNG
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong ban muon kiem tra co phai so chinh phuong hay khong: ");
        scanf("%d",&input);
    }

    //TÍNH TOÁN
    if((double)sqrt(input)==(int)sqrt(input))   //nếu căn(input) dạng số thực = căn (input) dạng số nguyên thì input chính là số chính phương
    {
        printf("day la so chinh phuong");
    }
    else
    {
        printf("day khong phai la so chinh phuong");
    }

    return 0;
}
