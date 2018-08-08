#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int x,y = 0;
	int sum = 0;
	int date = 0;
	scanf("%d %d", &x,&y);
	for (int i = 0; i < x-1; i++)
	{
		sum += day[i];
	}
	date = ((sum+y-1) % 7);
	if (date == 0) printf("MON\n");
	if (date == 1) printf("TUE\n");
	if (date == 2) printf("WED\n");
	if (date == 3) printf("THU\n");
	if (date == 4) printf("FRI\n");
	if (date == 5) printf("SAT\n");
	if (date == 6) printf("SUN\n");

	return 0;
}
