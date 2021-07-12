#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 0) return 0;
	int a[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	int Min = a[1],
		Max = a[n];
	int MIN = INT_MAX;
	int flag;
	int now;
	for (int i = 1; i <= n; i++)
	{
		now = abs(abs(a[i] - Max) - (a[i] - Min));
		if (MIN > now)
		{
			MIN = now;
			flag = i;
		}
	}
	cout << a[flag];
	return 0;
}
