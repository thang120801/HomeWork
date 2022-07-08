#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KHAI BAO
    int input=0;
    int count;
    int soTrai; //chữ số nằm ở bên trái cùng của input
    int soPhai; //chữ số nằm ở bên Phải cùng của input

    //LAY GIA TRI INPUT
    while (input<=0)    
    {
        printf("Nhap vao gia tri input:");
        scanf("%d",&input);
    }

    //TINH TOAN
    //ktra từng chữ số từ phải sang trái, nếu số cuối là n và các số tiếp theo là n--(giảm dần) thì là số tăng dần
    
    
    while(input%10!=0 && input/10!=0)
    {
        soPhai=input%10;
        input=input/10;
        soTrai=input%10;
        if(soTrai!=soPhai-1)   //nếu số trước không nhỏ hơn sau 1 đơn vị vì k phải số tăng dần     
        {
            printf("day KHONG phai la so tang dan \n");
            break;
        }
        else if(soTrai==soPhai-1 && input%10==input)    //nếu số trước nhỏ hơn sau 1 đơn vị và đã xét đến số cuối cùng thì là đây là số tăng dần
        {
            printf("day la so co cac chu so tang dan \n");
            break;
        }
    }
    return 0;
}