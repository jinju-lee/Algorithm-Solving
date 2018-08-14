#include <cstdio>

int main()
{
	int N;
	int fac;
	scanf("%d", &N);

	fac = N;
	
	for (int i = 1; i < N; i++)
	{
		fac *= (N - i);
	}
	if (N == 0)
		fac = 1;

	printf("%d\n", fac);
}
