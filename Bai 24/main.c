#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    long input=0;
    long count;

    //NHẬP VÀO SỐ CẦN TÌM ƯỚC SỐ LẺ CỦA SỐ ĐÓ
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong ban muon tim uoc so le: ");
        scanf("%ld",&input);
    }

    //TÍNH TOÁN: Nếu input % count = 0 thì count chính là ước số và nếu count không chia hết cho 2 thì count chính là ước số lẻ
    for(count=1;count<=input;count++)
    {
        if(input%count==0 && count%2!=0)
        {
            printf("%ld ;",count);
        }
    }
    printf(" la uoc so le cua %ld",input);
    return 0;
}
