#include<iostream>

using namespace std;

int main(void)
{
	int num=0;
	scanf("%d",&num);
	for(int i=0; i<num; i++){
		for(int k=0; k<i; k++){
			printf(" ");
		}
		for(int j=(num*2)-1; j>(i*2); j--){
			printf("*");
		}
		printf("\n");
	}
	for(int i=1; i<num; i++){
		for(int k=num; k>i+1; k--){
			printf(" ");
		}
		for(int j=0; j<(i*2)+1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
