#include <stdio.h>

int main() {
	int Age = 0;
	printf("What is your age?\n");
	scanf("%d", &Age);
	
	if(Age >= 0 && Age <= 13) {
		printf("You are a child");
	} else if(Age > 13 && Age <=17) {
		printf("You are a teenager");
	} else if(Age > 18 && Age <= 60) {
		printf("You are an Adult");
	} else {
		printf("You are a senior");
	}
	return 0;
	
}
