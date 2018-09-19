#include<stdio.h>

void main(){

	int num;

	scanf("%d",&num);
	if(num%2 ==0){
		int resultcouple=0;
		for(int i=1;i<=10;i++){
			resultcouple = resultcouple + i;
		}
		printf("%d",resultcouple);
	}
	else if(num%2 ==1){
		int resultsolo = 0;
		for(int i=1;i<=10;i++){
			resultsolo = resultsolo + i*i;
		}
		printf("%d",resultsolo);
	}
}
