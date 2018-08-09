#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i<num; i++)
	{
		for (int k = 0; k <i; k++)
		{
			printf(" ");
		}
		for (int j = num; j>i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
