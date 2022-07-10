#include <stdio.h>
#include <stdlib.h>
//GLOBAL VARIABLES
    int phut;
    int gio;
    int input=1208;  //the hien o gia tri phut
    int *pointerInput=&input;

int chuyendoi(phut,gio)
{
    phut=input%60;
    gio=input/60;
}

int main()
{
    //KHAI BAO
    

    printf("dia chi input variable  la: %p \n",&input);
    printf("gia tri cua pointerInput la: %d \n",*pointerInput);


    return 0;

}