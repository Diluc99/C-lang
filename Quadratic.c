#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,Q;
    printf("Enter the value for a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    Q=(-b+sqrt(b*b-4*a*c))/2*a;
    printf("The quadratic value is: %d\n",Q);
    return 0;
    // This program is written by SHIVAM KUMAR JHA RA2411056010039
}