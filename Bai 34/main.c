#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    int n;
    int count;
    float result=0;

    //LẤY GIÁ TRỊ CHO SỐ LẦN CĂN BẬC 2
    do
    {
        printf("Nhap vao so lan can bac 2 ma ban muon(>0):");
        scanf("%d",&n);
    }while(n<=0);

    //TÍNH TOÁN
    for(count=1;count<=n;count++)
    {
        result=sqrt(2+result);
    }
    printf("Ket qua la: %f",result);
    return 0;
}
