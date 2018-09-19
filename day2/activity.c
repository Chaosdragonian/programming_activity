#include<stdio.h>

void order();
void main(void){
	int ordercode = 0;

	while(0){
	order();
	
	scanf("%d",&ordercode);

	if(ordercode == 1){
		printf("input : 1");
		printf("you order Americano");
	}
	else if(ordercode == 2){
		printf("input : 2");
		printf("you order Capuchino");
	}
	else if(ordercode == 0){
		printf("input : 0");
		printf("it will be exit");
		break;
	}
	else{
		printf("you are wrong order");
	}

	}


}

void order(){

	printf("----- Menu -----");
        printf("1. Americano");
        printf("2. Capuchino");
        printf("0. Exit");
}

