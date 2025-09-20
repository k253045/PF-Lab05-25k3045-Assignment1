#include <stdio.h>

int main() {
    
    int rating = 0;
    printf("How would u rate the movie lion king from 1 to 5? \n");
    scanf("%d",&rating);
    
    switch(rating) {
    	case 1:
    		printf("Terrible");
    		break;
    	case 2:
    		printf("Poor");
    		break;
    	case 3:
    		printf("Average");
    		break;
    	case 4:
    		printf("Good");
    		break;
    	case 5:
    		printf("Excellent");
    		break;
	}
    
    return 0;
}


