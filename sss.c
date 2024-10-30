#include <stdio.h>
void evenno(){
    printf("It is even");
}
void oddno(){
    printf("it is odd no");
}
void main(){
    int num;
    printf("Enter any integer: ");
    scanf("%d",&num);
    if(num%2==0){
        evenno();
    }
    else{
        oddno();
    }
}
