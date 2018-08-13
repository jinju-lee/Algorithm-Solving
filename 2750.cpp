#include <cstdio>
#define MAX 1000
using namespace std;

void sort(int& a, int& b)
{
	int x;
	x = a;
	a = b;
	b = x;
}
int main()
{
	int N;
	int a[MAX] = { 0, };
		
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (a[i] > a[j])
				sort(a[i], a[j]);
			
		}
	}
	for (int i = 0; i < N; i++)
		printf("%d\n", a[i]);

}
