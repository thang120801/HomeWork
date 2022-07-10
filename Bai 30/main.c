#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    long input=0;
    long count;
    long result=0;

    //NHẬP VÀO SỐ MUỐN BIẾT CÓ PHẢI SỐ HOÀN THIỆN HAY KHÔNG
    while(input<=0)
    {
        printf("Nhap vao so nguyen duong ban muon biet co phai so hoan thien hay khong: ");
        scanf("%ld",&input);
    }

    //TÍNH TOÁN: Nếu input % count thì in ra màn hình số count (vì số hoàn thiện tránh số ước số trùng với số đó(input) nên count<input)
    for(count=1;count<input;count++)
    {
        if(input%count==0)
        {
            result=result+count;
        }
    }

    if(result==input)       //nếu tổng tất cả các ước số(ngoại trừ chính nó) bằng với chính nó thì in ra đây chính là số hoàn thiện
    {
        printf("%ld la so hoan thien",input);
    }
    else
    {
        printf("%ld khong phai la so hoan thien",input);
    }

    return 0;
}
