#include <cstdio>

#define MAX 10000  
int N, arr[MAX+1];

int main() 
{
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		arr[tmp]++;
	}
	
	for (int i = 1; i < 10001; i++)
	{
		for (int j = 0; j < arr[i]; j++)
			printf("%d\n", i);
	}
}
