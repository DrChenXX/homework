#include<bits/stdc++.h>
using namespace std;
int Do(int x,int y,int a[][],int nowmax,int n)
{
	if (x + nowmax - 1> n || y + nowmax - 1> n) return 0;
	bool flag = 0;
	for (int i = 0; i < nowmax; i++)
	{
		if (flag) break;
		for (int j = 0; j < nowmax; j++)
		{
			bool c = (i + j + 1) % 2;
			if (a[x + i][y + j] != c)
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag) return 0;
	int i;
	for (i = nowmax + 1; x + i - 1 <= n, y + i - 1 <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < nowmax; j++)
			{
				if (a[x + i - 1][y + j] != j % 2) break;
			}
		}
		else
		{
			
		}
	}
	return i - 1;
}
int main()
{
	int n;
	cin >> n;
	bool a[n + 1][n + 1];
	for (int i = 1; i <= n; i++)
	{
		string now;
		cin >> now;
		for (int j = 1; j <= n; j++)
			if (now[j - 1] == '0')
				a[i][j] = 0;
			else a[i][j] = 1;
	}
	int nowmax = 0;
	int nownum = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j])
			{
				int now = Do(i,j,a,nowmax,n);
				if (now == nowmax) nownum++;
				if (now > nowmax) nowmax = now,nownum = 1;
			}
		}
	}
	return 0;
}
