#include <cstdio>

int main()
{
	int N;
	long long fac;
	scanf("%d", &N);

	fac = N;
	for (int i = 1; i < N; i++)
	{
		fac *= (N - i);
	}
	
	printf("%d\n", (N / 5) + (N/ 25) + (N / 125));
}
