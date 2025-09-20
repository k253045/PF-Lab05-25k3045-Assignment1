#include <stdio.h>

int main() {
    int number = 0;
    printf("Give a number \n");
    scanf("%d", &number);
    
    if(number % 3 == 0 && number % 5 == 0) {
    	printf("Condition has been met");
	} else {
		printf("Condition has not met");
	}
    
    return 0;
}


