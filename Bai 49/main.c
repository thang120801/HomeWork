#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    int input=0;

    //LẤY GIÁ TRỊ ĐẦU VÀO INPUT
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong:");
        scanf("%d",&input);
    }

    //TÍNH TOÁN
    while(input%10!=input)
    {
        input=input/10;
    }
    printf("Chu so dau tien cua so nguyen duong nay la: %d",input);
    return 0;



}


