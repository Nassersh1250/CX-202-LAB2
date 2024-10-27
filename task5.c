#include <stdio.h>


int main(){

	int num;
	int frqa=0;
	int frqe=0;
	int frqi=0;
	int frqo=0;
	int frqu=0;
	int oth=0;
	char ch;


	printf("enter number of characters\n");
	scanf("%d",&num);

	for (int i = 0; i<num; i++){

		printf("enter character\n");
		scanf(" %c",&ch);

		if (ch == 'a'||ch == 'A'){
			frqa++;
		}

		else if(ch == 'e'|| ch == 'E'){
			frqe++;
		}
		else if(ch == 'i'|| ch == 'I'){
			frqi++;
		}
		else if (ch == 'o'||ch == 'O'){
			frqo++;
		}
		else if (ch == 'u' || ch == 'U'){
			frqu++;
		}
		else{
			oth++;
		}
	}

	printf("Frequency of a = %d\nFrequency of e = %d\nFrequency of i = %d\nFrequency of o = %d\nFrequency of u = %d\nFrequency of others = %d\n",frqa,frqe,frqi,frqo,frqu,oth);

	return 0;
}
