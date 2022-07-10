#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KHAI BAO
    long result=0;
    long preResult=1;
    long count;
    long i;
    long n;

    //LAY GIA TRI n
    do  //neu nhap n<1 thi cho nhap lai
    {
        printf("S = 1 + 1.2 + 1.2.3 + 1.2.3...n ---Nhap n: ");
        scanf("%ld",&n);
        if(n<1)
        {
            printf("\n Nhap lai n  \n");
        }
    }while(n<1);

    //TINH TOAN
    for(count=1;count<=n;count++)
    {
        preResult=preResult*count;
        result=result+preResult;

    }
    printf("ket qua la %ld",result);
    return 0;
}
