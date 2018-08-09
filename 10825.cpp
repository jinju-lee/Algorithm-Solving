#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;
struct grade {
	string name;
	int kor, eng, math;
};

bool compare(const grade &a, const grade &b)
{
	if (b.kor < a.kor)	
		return true;
	else if (b.kor == a.kor)
	{
		if (b.eng > a.eng)	
			return true;
		else  if (b.eng == a.eng)
		{
			if (b.math < a.math)	
				return true;
			else if (b.math == a.math)
				return b.name > a.name;
		}
	}
	return false;
}

int main() 
{
	int N;
	scanf("%d", &N);
	vector<grade> v(N);
	
	for (int i = 0; i < N; i++)
		cin >> v[i].name >> v[i].kor>> v[i].eng>> v[i].math;

	sort(v.begin(),v.end(),compare); 

	for (int i = 0; i < N; i++)
		cout << v[i].name << '\n';
}
