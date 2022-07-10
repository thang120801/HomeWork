#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BAO
    int input=0;
    int soDu;

    //LAY GIA TRI INPUT
    while (input<=0)
    {
        printf("Nhap vao gia tri input:");
        scanf("%d",&input);
    }

    //TINH TOAN INPUT CO PHAI SO TOAN SO LE HAY K
    while(input%10!=input)   //khi nao den chu so cuoi cung thi thoat loop
    {
        
        if(input%2==0)    //neu trong input co 1 so chan thi thong bao ket qua va thoat loop
        {
            printf("So nay khong phai so toan chu so le \n");
            break;
        }
        input=input/10; //vứt 1 số sau cùng vừa xét để xét tiếp số tiếp theo
    }
    if(input%2!=0)  //vì loop trên còn 1 chữ số thì sẽ out loop, nên ở đây xét thêm số còn lại cuối cùng
    {
        printf("So nay la so co tat ca chu so la so le \n");    //sau khi xet het cac chu so khong co so nao la so chan thi in man hinh ket qua
    }
   
    return 0;

}