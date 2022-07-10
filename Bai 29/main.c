#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    int input;
    int count;
    int result=0;

    //LẤY GIÁ TRỊ CỦA INPUT
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong ban muon tim uoc so le lon nhat:");
        scanf("%d",&input);
    }

    //TÍNH TOÁN
    for(count=1;count<=input;count++)
    {
        if(input%count==0 && count%2!=0)
        {
            result=count;
        }
    }
    printf("Uoc so le lon nhat cua %d la: %d",input,result);
    return 0;
}
