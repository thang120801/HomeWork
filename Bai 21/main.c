#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    long input=0;
    long count;
    long result=0;

    //LẤY VÀO SỐ MUỐN TÌM TỔNG CỦA TẤT CẢ ƯỚC SỐ CỦA SỐ ĐÓ
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong ban muon tim tong cua tat ca cac uoc so: ");
        scanf("%ld",&input);
    }

    //TÍNH TOÁN
    for(count=1;count<=input;count++)
    {
        if(input%count==0)      //Nếu input chia hết cho count (count tăng lên 1 đơn vị sau loop) thì cộng count vào result
        {
            result=result+count;
        }
    }
    printf("tong tat ca cac uoc so cua %ld la %ld",input,result);
    return 0;
}
