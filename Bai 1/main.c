#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n; //gia tri n
    long result=0; //result la tong cua phuong trinh

    //NHAP VAO GIA TRI CUA n
    printf("S=1+2+3+4...+n  ---  Nhap vao gia tri cua n:");
    scanf("%ld",&n);

    //TINH TONG
    for(long count=1;count<=n;count++)   //count chay tu 1-->6
    {
        result = result + count;
    }
    printf("Phuong trinh S=1+2+3+4+...+n  ---  voi n = %ld co ket qua la s = %ld",n,result);
    return 0;
}

12341234sdfdsfgdf23324
