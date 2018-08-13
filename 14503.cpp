#include <iostream>
#include <stdio.h>
using namespace std;

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int a[50][50];

int main()
{
	int cnt=0;
	int n,m;
	cin>>n>>m;
	int x,y,dir;
	cin>>x>>y>>dir;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			cin>>a[i][j];
	}
	while(1)
	{
		//현재 위치를 청소한다.
		if(a[x][y]==0)
		{
			a[x][y]=2;
		}
		//네 방향 모두 청소가 이미 되어있거나 벽
		if((a[x-1][y]!=0)&&(a[x][y+1]!=0)&&(a[x+1][y]!=0)&&(a[x][y-1]!=0))
		{
			//뒤쪽 방향이 벽이라 후진도 할 수 없는 경우
			if((a[x-dx[dir]][y-dy[dir]]==1))
				break;
			//바라보는 방향을 유지한 채로 한 칸 후진
			else
			{
				x-=dx[dir];
				y-=dy[dir];
			}
		}
		//왼쪽 방향에 아직 청소하지 않은 공간이 존재한다면
		else
		{
			dir=(dir+3)%4;
			if(a[x+dx[dir]][y+dy[dir]]==0)
			{
				x+=dx[dir];
				y+=dy[dir];
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]==2)
				cnt+=1;
		}
	}
	cout<<cnt<<'\n';
	return 0;
}
