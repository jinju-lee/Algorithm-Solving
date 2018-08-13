#include <iostream>
#include <stdio.h>

using namespace std;
int n;
int rmax=-1000000000;
int rmin= 1000000000;
int num[11], oper[4];
void calc(int now, int res) {
    // 탈출 조건
    if (now >= n-1) {
        rmax = rmax > res ? rmax : res;
        rmin = rmin < res ? rmin : res;
        return;
    }
    // 탐색
    for (int i = 0; i < 4; i++) {
        if (oper[i] > 0) {
            oper[i]--;
            if (i == 0)    calc(now + 1, res + num[now + 1]);
            if (i == 1)    calc(now + 1, res - num[now + 1]);
            if (i == 2)    calc(now + 1, res * num[now + 1]);
            if (i == 3)    calc(now + 1, res / num[now + 1]);
            oper[i]++;
        }
    }    
}
int main()
{
	cin>>n;

	for(int i=0; i<n; i++)
		cin>>num[i];
	for(int i=0; i<4; i++)
		cin>>oper[i];
	calc(0,num[0]);
	cout<<rmax<<endl<<rmin;
	return 0;
}
