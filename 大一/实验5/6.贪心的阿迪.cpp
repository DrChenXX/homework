#include<iostream>
using namespace std;
int main()
{
	int n, k, m, d;
	cin >> n >> k >> m >> d;
	int ans = 0;
	int round, rest, now;
	for (int i = 1; i <= m; i++)
	{
		round = d;
		rest = n;
		while(round > 0 && rest - i * k >= 0)
		{
			round--;
			rest -= i * k;
		}
		if (round == 0)
		{
			now = d * i;
			ans = max(ans, now);
		}
		else
		{
			now = (d - round) * i;
			now += min(i, rest);
			ans = max(ans, now);
		}
	}
	cout << ans;
	return 0;
}
