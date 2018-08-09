#include <cstdio>
#define MAX 1000000    
#define SWAP(x, y) { int t = x; x = y; y = t; }  
int N, arr[MAX]; 

void quickSort(int *array, int left, int right) 
{
	int mLeft = left, mRight = right;
	int pivot = array[(left + right) / 2];

	while (mLeft <= mRight) 
    {
		while (pivot > array[mLeft]) mLeft++;
		while (pivot < array[mRight]) mRight--;

		if (mLeft <= mRight) 
        {
			SWAP(array[mLeft], array[mRight]);
			mLeft++, mRight--;
		}
	}

	if (left < mRight) quickSort(arr, left, mRight);
	if (mLeft < right) quickSort(arr, mLeft, right);
}

int main() 
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) 
		scanf("%d", &arr[i]);

	quickSort(arr, 0, N - 1); 

	for (int i = 0; i < N; i++) 
		printf("%d\n", arr[i]);
}
