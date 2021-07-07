#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		long long now,ans,last,times = 1;
		cin >> now;
		ans = 0;
		while (now != 0)
		{
			last = now % 10;
			if (last > 8) last--;
			if (last > 3) last--;
			ans += last * times;
			times *= 8;
			now /= 10;
		}
		cout << ans << endl;
	}
	return 0;
}
