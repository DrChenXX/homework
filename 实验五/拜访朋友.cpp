#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	bool a[m + 1];
	for (int i = 0; i <= m; i++)
	{
		a[i] = 0;
	}
	int x,y;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;
		for (int j = x; j < y && j <= m; j++)
		{
			a[j] = 1;
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (a[i] == 0)
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
