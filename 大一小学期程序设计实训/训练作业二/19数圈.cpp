#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20][20];
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
			a[i][j] = 0;
	a[11][11] = 1;
	int nowx = 12,nowy = 11;
	int dir = 0;
	for (int i = 2; i <= 100; i++)
	{
		a[nowx][nowy] = i;
		if (dir == 0)
		{
			nowy++;
			if (a[nowx - 1][nowy] == 0) dir = 1; 
		}
		else if (dir == 1)
		{
			nowx--;
			if (a[nowx][nowy - 1] == 0) dir = 2;
		}
		else if (dir == 2)
		{
			nowy--;
			if (a[nowx + 1][nowy] == 0) dir = 3;
		}
		else if (dir == 3)
		{
			nowx++;
			if (a[nowx][nowy + 1] == 0) dir = 0;
		}
	}
	int n;
	cin >> n;
	int left = 11 - (n - 1) / 2,
		right = 11 + n / 2;
	for (int i = left; i <= right; i++)
	{
		for (int j = left; j <= right; j++)
		{
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
