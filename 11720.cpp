#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int num=0,x=0,sum=0;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        scanf("%1d",&x);
        sum+=x;
    }
    cout<<sum;
}
