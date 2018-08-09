#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

#define MAX 100000  
#define SWAP(x, y) { int t = x; x = y; y = t; }  
int x[MAX], y[MAX]; 

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	if (b.first > a.first)
		return true;
	else if (b.first == a.first)
		return false;
	return false;
}

int main() 
{
	int N;
	vector<pair<int,string>> v;

	scanf("%d", &N);
	v.resize(N);
	
	for (int i = 0; i < N; i++)
		cin >> v[i].first >> v[i].second;

	stable_sort(v.begin(),v.end(),compare); 

	for (int i = 0; i < N; i++)
		cout << v[i].first << " " << v[i].second << '\n';
}
