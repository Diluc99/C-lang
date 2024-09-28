#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Num1,Num2: ");
    scanf("%d %d",&a,&b);
    printf("Num 1 :%d \n",a);
    printf("Num 2 :%d \n",b);
    c=a;
    a=b;
    b=c;
    printf("After swapping \n Num 1: %d\n",a);
    printf("Num 2: %d",c);
    return 0;
    // This program is written by SHIVAM KUMAR JHA RA24110560100
}