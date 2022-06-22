#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //thu vien toan hoc

int main()
{
    //KHAI BAO
    long result=0;
    long n; //gioi han cua count
    long count;     //count chay tu 1 --> n

    //LAY GIA TRI n
    printf("s=1^2 + 2^2 + 3^2 + ... n^2 --- nhap vao gia tri cua n:");
    scanf("%ld",&n);

    //TINH TONG
    for(count=1;count<=n;count++)
    {
        result=result+pow(count,2);
    }
    printf("ket qua s=1^2 + 2^2 + 3^2 + ... n^2 --- voi n=%ld la s=%ld",n,result);
    return 0;
}


