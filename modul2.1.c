#include<stdio.h>
int main(){
    int num, squre, cube;
    printf("entr your value :");
    scanf("%d", &num);

    squre = num * num;
    cube = num * num * num;

     printf("squre of %d is %d\n",num, squre);
     printf("cube of %d is %d\n",num, cube);
     return 0;
     
}