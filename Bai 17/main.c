#include <stdio.h>
#include <stdlib.h>
#include <math.h> //thư viện toán học

//FUNCTION TINH GIAI THUA
int giaiThua(int input)
{
    //KHAI BAO
    int count;
    long result=input;

    //TINH TOAN
    for(count=1;count<(input-1);count++)
    {
        result=result*(input-count);
    }
    return result;  //result sẽ là kết quả được trả về cho function giaiThua
}

//FUNCTION MAIN
int main()
{
    //KHAI BAO
    int x;
    int n=0;
    int count;
    double result=0;


    //LAY GIA TRI CHO n VA x
    printf("nhap gia tri cho x:");
    scanf("%d",&x);
    while(n==0)
    {
    printf("n>=1, nhap gia tri cho n:");
    scanf("%d",&n);
    }

    //TINH TOAN
    for(count=1;count<=n;count++)
    {
        result=result+pow(x,((count/(double)giaiThua(count))));     //ở function trên giaiThua() trả về số nguyên nhưng ở dưới chia dạng số thực nên
    }                                                               //trước giaiThua(count) có để (double) nhằm giá trị của giaiThua(count) được trả về số thực ngay lập tức
    printf("ket qua la: %f",result);
    return 0;
}
