#include <stdio.h>


int main(){

	int num;
	float inc;

	printf("input N\n");
	scanf("%d",&num);

	for (int i = 0; i<=num; i++){
		printf("%d ",num-i);
	}

	printf("\n");

	for (int k = 1; k<=num; k++){
		printf("%d ",k);
	}

	printf("\n");

	printf("input increment (must be less than 1)\n");
	scanf("%f",&inc);

	if (inc<1&&inc>0){
		for(float num2 = 0; num2 < num; num2 = num2+inc){
			printf("%.2f ",num2);
		}
	}
	else{
		printf("error, must be less than 1 and greater than 0\n");
	}
	printf("\n");

	return 0;
}
