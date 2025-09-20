#include <stdio.h>

int main() {
    int withdraw;
    printf("How much dop want to withdraw? \n");
    scanf("%d", &withdraw);
    
    if(withdraw > 500 || withdraw % 20 != 0) {
    	printf("Withdraw denied");
	} else {
		printf("Withdraw approved");
	}
    
    return 0;
}


