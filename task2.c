#include <stdio.h>

int main(){


	int num;
	int rem;

	printf("input a number\n");
	scanf("%d",&num);
	
	rem = num%2;

	if (rem != 0|| num == 2) {
		printf("that number is a prime number\n");
	}

	else {
		printf("that number is not a prime number\n");
	}

	return 0;

}



