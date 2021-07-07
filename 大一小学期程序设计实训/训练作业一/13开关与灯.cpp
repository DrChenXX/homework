#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m; 
	bool a[n + 1][m + 1];
	int b[m + 1];
	for (int i = 1; i <= m; i++)
		b[i] = 0;
	string now;
	for (int i = 1; i <= n; i++)
	{
		cin >> now;
		for (int j = 1; j <= m; j++)
		{
			a[i][j] = now[j - 1] - '0';
			b[j] += a[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		bool flag = 1;
		for (int j = 1; j <= m; j++)
		{
			if (b[j] - int(a[i][j]) == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
