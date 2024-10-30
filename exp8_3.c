#include <stdio.h>
int isEligibleToVote(int age) {
    if (age >= 18) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    if  (isEligibleToVote(age)) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
 
  return 0;
}