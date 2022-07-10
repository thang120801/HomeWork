#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BÁO
    int input=0;
    int count;

    //LẤY VÀO GIÁ TRỊ INPUT
    while(input<=0)     //loop chỉ dừng khi input lấy giá trị nguyên dương
    {
        printf("Nhap vao gia tri input:");
        scanf("%d",&input);
    }
    printf("input la: %d \n",input);

    //TÍNH TOÁN
    /*mỗi lần loop sẽ là mỗi lần %10, sau khi input&10 bằng bao nhiêu %2 (nếu =0 thì đây là số chẵn, ngược lại lẻ)*/
    for(count=0;input%2!=input;input=input/10)
    {
        
        if(input%2==1)
        {
            count++;
        }
        printf("count hien tai la: %d \n",count);
        printf("input hien tai la: %d \n",input);
    }
    if(input%2)     //khi input/10 chỉ còn 1 số thì (vd input=1) thì input%2=0 thoát khỏi lặp mà count chưa tăng nên ở dưới ra khỏi vòng lặp count ++;
    {
        count++;
    }
    
    printf("input co %d chu so la so le",count);

    

    return 0;
}