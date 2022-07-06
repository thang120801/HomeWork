#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    int input;
    int count;

    //LẤY VÀO GIÁ TRỊ INPUT
    while(input<=0)     //loop chỉ dừng khi input lấy giá trị nguyên dương
    {
        printf("Nhap vao gia tri input:");
        scanf("%d",&input);
    }

    //TÍNH TOÁN
    /*mỗi lần loop sẽ là mỗi lần %10 (mỗi lần %10 thì count ++, count là đếm có bao nhiêu số trong input). 
    Khi input%10== input thì đây là count cuối cùng (số cuối cùng của input*/
    for(count=1;input%10!=input;count++)
    {
        input=input/10;
    }
    
    printf("input co %d chu so",count);

    

    return 0;
}