#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //KHAI BAO
    long n=0;
    long x;
    long count;
    long result=0;

    //IN RA DE BAI
    printf("S=x + x^2 + x^3 + ... + x^n \n");

    //LAY GIA TRI x VA n
    printf("Nhap vao gia tri cua x:");
    scanf("%ld",&x);
    while(n==0)
    {
        printf("n>=1, Nhap vao gia tri cua n:");
        scanf("%ld",&n);
    }

    //TINH TOAN
    for(count=1;count<=n;count++)
    {
        if(x==0)
        {
            result=0;
            break;
        }
        result=result + pow(x,count);
    }
    printf("ket qua la: %ld",result);
    return 0;
}
