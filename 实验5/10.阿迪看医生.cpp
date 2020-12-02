#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ans = 0, s, d, now;
	for (int i = 1; i <= n; i++)
	{
		cin >> s >> d;
		now = s;
		while (ans >= now)
		{
			now += d;
		}
		ans = now;
	}
	cout << ans;
	return 0;
}
