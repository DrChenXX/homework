#include<iostream>
using namespace std;
int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	bool a[n + 2][m + 2];
	bool b[n + 2][m + 2][5];
	bool ans[n + 1][n + 1];
	for (int i = 0; i <= n + 1; i++)
	{
		for (int j = 0; j <= m + 1; j++)
		{
			if (i == 0 || i == n + 1 ||
				j == 0 || j == m + 1) a[i][j] = 1;
			else a[i][j] = 0;
		}
	
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			ans[i][j] = 0;
		}
	}
	for (int i = 1; i <= n + 1; i++)
	{
		for (int j = 1; j <= m + 1; j++)
		{
			for (int ss = 1;ss <= 4; ss++)
				b[i][j][ss] = 0;
		}
	}
	int x,y;
	for (int i = 1; i <= k; i++)
	{
		cin >> x >> y;
		a[x][y] = 1;
	}
	int dir;
	string c;
	cin >> x >> y >> c;
	if (c == "NE") dir = 1;//¨J
	if (c == "NW") dir = 2;//¨I
	if (c == "SE") dir = 3;//¨K
	if (c == "SW") dir = 4;//¨L
	while (1)
	{
		if (b[x][y][dir])
		{
			break;
		}
		b[x][y][dir] = 1;
		if (dir == 1)//¨J
		{
			if (!a[x - 1][y])
			{
				ans[x - 1][y] = 1;
				x--;
				y++;
				goto ha;
			}
			if (a[x][y] && a[x - 1][y - 1])
			{
				ans[x][y - 1] = 1;
				x++;
				y--;
				dir = 4;
				goto ha;
			}
			if (a[x][y])
			{
				ans[x - 1][y - 1] = 1;
				x--;
				y--;
				dir = 2;
				goto ha;
			}
			if (a[x - 1][y - 1])
			{
				ans[x][y] = 1;
				x++;
				y++;
				dir = 3;
				goto ha;
			}
			ans[x][y - 1] = 1;
			x++;
			y--;
			dir = 4;
			goto ha;
		}
		if (dir == 2)//¨I 
		{
			if (!a[x - 1][y - 1])
			{
				ans[x - 1][y - 1] = 1;
				x--;
				y--;
				goto ha;
			}
			if (a[x][y - 1] && a[x - 1][y])
			{
				ans[x][y] = 1;
				x++;
				y++;
				dir = 3;
				goto ha;
			}
			if (a[x][y - 1])
			{
				ans[x - 1][y] = 1;
				x--;
				y++;
				dir = 1;
				goto ha;
			}
			if (a[x - 1][y])
			{
				ans[x][y - 1] = 1;
				x++;
				y--;
				dir = 4;
				goto ha;
			}
			ans[x][y] = 1;
			x++;
			y++;
			dir = 3;
			goto ha;
		}
		if (dir == 3)//¨K
		{
			if (!a[x][y])
			{
				ans[x][y] = 1;
				x++;
				y++;
				goto ha;
			}
			if (a[x][y - 1] && a[x - 1][y])
			{
				ans[x - 1][y - 1] = 1;
				x--;
				y--;
				dir = 2;
				goto ha;
			}
			if (a[x][y - 1])
			{
				ans[x - 1][y] = 1;
				x--;
				y++;
				dir = 1;
				goto ha;
			}
			if (a[x - 1][y])
			{
				ans[x][y - 1] = 1;
				x++;
				y--;
				dir = 4;
				goto ha;
			}
			ans[x - 1][y - 1] = 1;
			x--;
			y--;
			dir = 2;
			goto ha;
		}
		if (dir == 4)//¨L
		{
			if (!a[x][y - 1])
			{
				ans[x][y - 1] = 1;
				x++;
				y--;
				goto ha;
			}
			if (a[x - 1][y - 1] && a[x][y])
			{
				ans[x - 1][y] = 1;
				x--;
				y++;
				dir = 1;
				goto ha;
			}
			if (a[x - 1][y - 1])
			{
				ans[x][y] = 1;
				x++;
				y++;
				dir = 3;
				goto ha;
			}
			if (a[x][y])
			{
				ans[x - 1][y - 1] = 1;
				x--;
				y--;
				dir = 2;
				goto ha;
			}
			ans[x - 1][y] = 1;
			x--;
			y++;
			dir = 1;
			goto ha;
		}
		ha: ;
	}
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (ans[i][j]) sum++;
		}
	}
	cout << sum;
	return 0;
}
