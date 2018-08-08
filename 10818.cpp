#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
	int x,min=1000000,max=-1000000,num;
	scanf("%d",&num);
	for(int i=0; i<num; i++){
		scanf("%d",&x);
		if(x<min) min=x;
		if(x>max) max=x;
	}
	printf("%d %d\n",min,max);
	return 0;
}
