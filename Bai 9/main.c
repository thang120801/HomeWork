#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //KHAI BAO
    long count;
    long n;
    long result=1;      //result = 1 dau tien vi neu result = 0 thi ket qua se luon = 0

    //NHAP GIA TRI n
    printf("S = 1 x 2 x 3 x ... x n --- nhap gia tri n:");
    scanf("%ld",&n);

    //TINH TOAN
    if(n==0)
    {
        result=0;
    }
    for(count=1;count<=n;count++)
    {
        result=result*count;
    }
    printf("ket qua = %ld",result);
    return 0;
}
