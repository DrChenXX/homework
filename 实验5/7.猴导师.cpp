#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int a[n + 1];
	bool b[n + 1][n + 1];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			b[i][j] = 0;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int x,y;
	for (int i = 1; i <= k; i++)
	{
		cin >> x >> y;
		b[x][y] = 1;
		b[y][x] = 1;
	}
	int ans;
	for (int i = 1; i <= n; i++)
	{
		ans = 0;
		for (int j = 1; j <= n; j++)
		{
			if (a[i] > a[j] && b[i][j] == 0)
			{
				ans++;
			}
		}
		cout << ans << " ";
	}
	return 0;
}
