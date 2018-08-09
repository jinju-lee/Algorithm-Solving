#include <cstdio>
#include <vector>
#include <algorithm>

#define MAX 100000  
using namespace std;

bool compare(pair<int,int>& a, pair<int,int>& b) 
{
	if (b.second > a.second)
		return true;
	else if (b.second == a.second)
	{
		if (b.first > a.first)
			return true;
		else
			return false;
	}
	else
		return false;
}

int main() 
{
	int N;
	vector<pair<int,int>> v;

	scanf("%d", &N);
	v.resize(N);
	
	for (int i = 0; i < N; i++) 
		scanf("%d %d", &v[i].first,&v[i].second);

	sort(v.begin(),v.end(),compare); 

	for (int i = 0; i < N; i++) 
		printf("%d %d\n", v[i].first, v[i].second);
    
    return 0;
}
