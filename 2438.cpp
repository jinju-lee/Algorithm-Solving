#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	scanf("%d", &num);
	for (int i = 1; i<num+1; i++)
	{
		for (int j = 1; j<i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
