#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	int sum = 0;
	scanf("%d", &num);

	for (int i = 1; i < num+1; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
