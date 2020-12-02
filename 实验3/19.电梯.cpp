#include<iostream>
using namespace std;
int main()
{
	int n,last = 0,now,ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> now;
		if (now > last)
		{
			ans += (now - last) * 6;
		}
		else
		{
			ans += (last - now) * 4;
		}
		last = now;
		ans += 5;
	}
	cout << ans;
	return 0;
}
