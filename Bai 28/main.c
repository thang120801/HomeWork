#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    int input;
    int count;
    int result=0;

    //LẤY GIÁ TRỊ INPUT
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong ban muon tim tong tat ca cac so nho hon no:");
        scanf("%d",&input);
    }

    //TÍNH TOÁN
    for(count=1;count<input;count++)
    {
        if(count<input)
        {
            result=result+count;
        }
    }
    printf("Ket qua la: %d",result);
    return 0;
}
