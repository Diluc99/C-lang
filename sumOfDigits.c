#include<stdio.h>
int main()
{
    int num,r,sum=0;
    printf("Enter Num: ");
    scanf("%d",&num);
    for(;num!=0;num/=10)
    {
        r=num%10;
        sum+=r;
    }
    printf("sum is: %d\n",sum);
    return 0;
}
 