#include <stdio.h>


int main(){

	int vert;
	int hori;
	int n = 0;
	char dir;

	printf("enter vertical position\n");
	scanf("%d",&vert);
	printf("enter horizontal position(less than 4)\n");
	scanf("%d",&hori);

	if (vert>4||hori>4){
		printf("error must be less than 4\n");
		return 0;
	}
	

	while (n != 1){

		if(vert<=4&&hori<=4&&vert>0&&hori>0){

			printf("enter direction (u/d/l/r)\n");
			scanf(" %c",&dir);

			if (dir == 'u'){
				vert--;
			}
			else if (dir == 'd'){
				vert++;
			}
			else if (dir == 'r'){
				hori++;
			}
			else if (dir == 'l'){
				hori--;
			}
			else{
				printf("error\n");
			}
		}

		else{
			n++;
		}

	}

	printf("the player has reached the boundary at (%d,%d)\n",vert,hori);

	return 0;
}

		

