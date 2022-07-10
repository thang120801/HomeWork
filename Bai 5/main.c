#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //thu vien toan hoc

int main()
{
    //KHAI BAO
    double count;
    double result=0;
    double n;

    //LAY GIA TRI CUA n
    printf("S=1 + 1/3 + 1/5 + ... + 1/(2n+1) --- nhap gia tri cua n:");
    scanf("%lf",&n);

    //TINH TOAN
    for(count=0;count<=n;count++)
    {
        result=result + 1/(2*count+1);
    }

    printf("ket qua = %f",result);
    return 0;
}
