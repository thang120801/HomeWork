#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    long input=0;
    long count;
    long i=0;

    //NHẬP VÀO SỐ INPUT
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong ban muon dem so luong uoc so cua no: ");
        scanf("%ld",&input);
    }

    //TÍNH TOÁN (ĐẾM SỐ LƯỢNG ƯỚC SỐ)
    for(count=1;count<=input;count++)
    {
        if(input%count==0)
        {
            i++;
        }
    }
    printf("So %ld co %ld uoc so",input,i);
    return 0;
}
