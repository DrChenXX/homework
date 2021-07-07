#include<iostream>
using namespace std;
int main()
{
	int n, g, r, q;
	cin >> n >> g >> r;
	int road[n + 1];
	for (int i = 0; i <= n; i++)
	{
		cin >> road[i];
	}
	cin >> q;
	int now;
	for (int i = 1; i <= q; i++)
	{
		cin >> now;
		for (int j = 0; j < n; j++)
		{
			now += road[j];
			int judge = now % (g + r);
			if (judge < g)
			{
				continue;
			}
			else
			{
				now += (g + r) - judge;
			}
		}
		now += road[n];
		cout << now << " ";
	}
	return 0;
}
