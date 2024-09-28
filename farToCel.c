#include<stdio.h>
int main()
{
    float TempC,TempF;
    printf("Enter Temprature in Farenheit: ");
    scanf("%f",&TempF);
    TempC=(TempF-32)*5/9;
    printf("The Temprature in Celsius is: %f",TempC);
    return 0;
    //This program is written by SHIVAM KUMAR JHA RA2411056010039
}