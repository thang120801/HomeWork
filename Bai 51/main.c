#include <stdio.h>
#include <stdlib.h>

int main()
{
//KHAI BÁO   
    int input=0;
    int soDu;
    int result=0;
 
//NHẬP VÀO INPUT
    while(input<=0)
    {
        printf("nhap vao so nguyen duong ban muon:");
        scanf("%d",&input);
    }

//TÍNH TOÁN
    while(input%10!=input)      //khi input đến số cuối cùng thì tự thoát vòng lặp
    {
        soDu=input%10;
        if(soDu>result)
        {
            result=soDu;
        }
        input=input/10;     //vứt đi số sau cùng vừa so sánh xong

    }
    /*khi đến số cuối cùng thì bị thoát loop(chưa kịp so sánh số cuối)nên bổ sung thêm 2 instruction
    phía trên ở dưới này*/
    soDu=input%10;
    if(soDu>result)
    {
        result=soDu;
    }
    //khi so sánh hết các số rồi thì in ra số lớn nhất
    printf("chu so lon nhat la %d",result);
    return 0;
}

