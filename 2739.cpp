#include<stdio.h>
#include<iostream>

#define gu 9

using namespace std;

int main()
{
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i <gu; i++)
	{
		printf("%d * %d = %d\n",num,i+1,num*(i+1));
	}
	return 0;
}
