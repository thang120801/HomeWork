#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    //KHAI BÁO
    int input=0;
    int soDu;
    int soNhan;     /*Số nhân là số số 0 phía sau 1 chữ số, vd:741 thì chữ số 7 có số nhân bằng 100 (700+40+1)*/
    int result=0;
    int inputBanDau;

    //LẤY GIÁ TRỊ ĐẦU VÀO CHO INPUT
    while(input<=0)     //Nếu nhập đúng số nguyên dương thì thoát khỏi vòng lặp
    {
        printf("Nhap vao 1 so nguyen duong de tim so dao nguoc:");
        scanf("%d",&input);
    }
    inputBanDau=input;

    //TÍNH TOÁN SỐ CHỮ SỐ TRONG INPUT (số chữ số =soNhan)
    /*Sau mỗi loop thì input được vứt đi 1 chữ số sau cùng và số nhân được tăng thêm 1 số 0, 
    đến khi input%10==input, tức là chỉ còn 1 chữ số thì dừng loop*/
    for(soNhan=1;input%10!=input;soNhan*=10)    
    {
        input=input/10;
    }

    //TÍNH SỐ ĐẢO NGƯỢC CỦA INPUT
    while(inputBanDau%10!=inputBanDau)
    {
        soDu=inputBanDau%10;
        result=result+soDu*soNhan;
        soNhan/=10;     //sau mỗi loop số nhân giảm đi 1 số 0
        inputBanDau=inputBanDau/10;
    }
    //lúc input còn 1 số thì loop trên sẽ bị thoát ra=>chưa kịp cộng vào biến result nên ở dưới có chèn thêm 2 lệnh để cộng thêm vào result
    soDu=inputBanDau%10;
    result=result+soDu*soNhan;
    printf("So dao nguoc cua input la: %d",result);
    return 0;
}