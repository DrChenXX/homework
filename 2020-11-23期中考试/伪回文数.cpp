#include<iostream>
using namespace std;
int main()
{
	int l,r;
	cin >> l >> r;
	int ans = 0;
	int last,first,now;
	for (int i = l; i <= r; i++)
	{
		last = i % 10;
		now = i;
		while(now)
		{
			first = now % 10;
			now = now / 10;
		}
		if(first == last)
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}

