#include<iostream>

using namespace std;

int main(void)
{
	int num=0;
	scanf("%d",&num);
	for(int i=0; i<num; i++){
		for(int j=num; j>i+1; j--){
			printf(" ");
		}
		for(int k=0; k<(i*2)+1; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
