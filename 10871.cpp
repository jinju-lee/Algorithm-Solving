#include <cstdio>
#define MAX 10000

int main()
{
	int N, X;
	int arr[MAX];

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < X)
			printf("%d ", arr[i]);
		if (i == N-1) 
			printf("\n");
	}
}
