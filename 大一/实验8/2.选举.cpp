#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int soc[m + 1][n + 1];
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> soc[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		soc[0][i] = 0;
	}
	int Max,pos;
	for (int i = 1; i <= m; i++)
	{
		Max = -1;
		for (int j = 1; j <= n; j++)
		{
			if (soc[i][j] > Max)
			{
				Max = soc[i][j];
				pos = j;
			}
		}
		soc[0][pos]++;
	}
	Max = -1;
	for (int i = 1; i <= n; i++)
	{
		if (soc[0][i] > Max)
		{
			pos = i;
			Max = soc[0][i];
		}
	}
	cout << pos;
	return 0;
}
