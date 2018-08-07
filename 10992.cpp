#include<iostream>

using namespace std;

int main(void)
{
	int num=0;
	scanf("%d",&num);
	for(int i=0; i<num-1; i++){
		for(int j=num; j>i+1; j--){
			printf(" ");
		}
			printf("*");

		for(int k=1; k<(i*2); k++){
			printf(" ");
		}
		if(i>0)	printf("*");
		printf("\n");
	}
	for(int l=0; l<(num*2)-1; l++){
				printf("*");
	}
	printf("\n");
	
	return 0;
}
