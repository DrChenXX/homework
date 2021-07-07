#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p1,t1,p2,t2,p3,n;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int l,r;
	cin >> l >> r;
	n--;
	int ans = (r - l) * p1;
	while (n--)
	{
		cin >> l;
		if (l - r <= t1)
		{
			ans += (l - r) * p1;
		}
		if (l - r > t1 && l - r <= t1 + t2)
		{
			ans += p1 * t1 + (l - r - t1) * p2;
		}
		if (l - r > t1 + t2)
		{
			ans += p1 * t1 + p2 * t2 + (l - r - t1 - t2) * p3;
		}
		cin >> r;
		ans += (r - l) * p1;
	}
	cout << ans;
	return 0;
}
