#include <stdio.h>

int main() {
    
    int num1 = 0;
    printf("What is the first number\n");
    scanf("%d", &num1);
    
    int num2 = 0;
    printf("What is the second number \n");
    scanf("%d", &num2);
    
    int max = (num1 > num2) ? printf("Num1 is the greatest") : printf("Num2 is the greatest");
    
    return 0;
}


