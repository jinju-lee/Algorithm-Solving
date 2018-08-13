#include <cstdio>
#define MAX 1000

int main()
{
	int C,N,cnt;
	int score[MAX];
	double mean = 0; double sum = 0;

	scanf("%d", &C);

	for (int i = 0; i < C; i++)
	{
		cnt = 0; sum = 0; mean = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &score[i]);
		}
		for (int i = 0; i < N; i++)
		{
			sum += (double)score[i];
		}
		mean = sum / (double)N;
		for (int i = 0; i < N; i++)
		{
			if (score[i] > mean) cnt++;
		}
		printf("%.3f%%\n", (double)cnt / (double)N*100.0);
	}	
}
