#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    int n;
    int count;
    float result=1;

    //LẤY SỐ DẤU THẬP PHÂN BẠN MUỐN
    do
    {
        printf("Nhap vao so dau thap phan ban muon(>0):");
        scanf("%d",&n);
    }while(n<=0);

    //TÍNH TOÁN
    for(count=1;count<=n;count++)
    {
        result=1/(1+result);
    }
    printf("Ket qua la: %f",result);
    return 0;
}
