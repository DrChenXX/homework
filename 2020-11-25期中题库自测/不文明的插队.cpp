#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = i;
	}
	int num,now;
	for (int i = 1; i <= m; i++)
	{
		cin >> num;
		now = 0;
		int last = num - 1,
			c;
		while (a[now] != num - 1)
		{
			c = a[now];
			a[now] = last;
			last = c;
			now++;
		}
		a[now] = last;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == i)
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
