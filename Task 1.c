#include <stdio.h>

int main() {
	char colour = ' ';
	printf("Select (R or Y or G)");
	scanf("%c", &colour);
	
	if(colour == 'R') {
		printf("Stop");
	} else if(colour == 'Y') {
		printf("caution");
	} else if(colour == 'G') {
		printf("Go");
	}
	return 0;
	
}
