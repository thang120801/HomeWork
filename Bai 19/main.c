#include <stdio.h>
#include <stdlib.h>

//FUNCTION TÍNH GIAI THỪA
int tinhGiaiThua(int input)
{
    //KHAI BÁO
    int result=input;   //để cho vòng lặp đầu tiên luôn là giai thừa = input * (input-1)*....
    int count;

    //TÍNH TOÁN
    for(count=1;input-count>=1;count++)
    {
        result=result*(input-count);
    }
    return result;

}

//FUNCTION MAIN
int main()
{
    //KHAI BÁO
    int n;
    int x;
    int count;
    double result=1;


    //LẤY GIÁ TRỊ n VÀ x
    printf("Nhap vao x:");
    scanf("%d",&x);
    printf("Nhap vao n:");
    scanf("%d",&n);

    //TÍNH TOÁN
    for(count=0;count<=n;count++)
    {
        result=result + pow(x,((double)(2*count+1)/tinhGiaiThua(2*count+1)));
    }

    printf("ket qua la: %f \n",result);
    return 0;
}
