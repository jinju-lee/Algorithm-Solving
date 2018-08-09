#include<iostream>

using namespace std;

int main(void)
{
	int num=0;
	scanf("%d",&num);
	for(int i=0; i<num; i++){
		for(int k=0; k<i+1; k++){
			printf("*");
		}
		for(int j=(num*2)-1; j>(i*2)+1; j--){
			printf(" ");
		}
		for(int k=0; k<i+1; k++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=0; i<num-1; i++){
		for(int k=num; k>i+1; k--){
			printf("*");
		}
		for(int j=-1; j<(i*2)+1; j++){
			printf(" ");
		}
		for(int k=num; k>i+1; k--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
