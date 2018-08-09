#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i<num; i++)
	{
		for (int j = num-1; j>i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <i+2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
