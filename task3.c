#include <stdio.h>


int main(){

	int cit=0;
	float pop1;
	int sum;
	float mean;

	printf("enter number of cities\n");
	scanf("%d",&cit);
	printf("%d\n",cit);
	float pop[cit];

	for (int i = 0; i< cit; i++){
		printf("enter the population of city %d\n",i+1);
		scanf("%f",&pop1);

		pop[i] = pop1;
	}

	for (int k = 0; k < cit; k++){

		sum = sum + pop[k];
	}

	mean = sum/cit;

	printf("Mean population = %f\n",mean);
	
	float max = pop[0];
	float min = pop[0];

	for (int j = 0; j < cit; j++){
		if (pop[j]>max){
			max = pop[j];
		}
		else if (pop[j]<min&&pop[j]!=0){
			min = pop[j+1];
		}
		else{
		}
	}

	printf("the maximum population = %f\n",max);
	printf("the minimum population = %f\n",min);


	return 0;
}
