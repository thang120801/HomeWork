#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    long input=0;
    long count;

    //NHẬP VÀO SỐ CẦN TÌM ƯỚC SỐ
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong ban muon tim uoc so: ");
        scanf("%ld",&input);
    }

    //TÍNH TOÁN: Nếu input % count thì in ra màn hình số count
    for(count=1;count<=input;count++)
    {
        if(input%count==0)
        {
            printf("%ld;",count);
        }
    }
    printf(" la uoc so cua %ld",input);
    return 0;
}
