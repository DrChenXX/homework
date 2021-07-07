#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	while(cin >> n)
	{
		if(n == 0) return 0;
		int now,last = -1,
			nowsum = 0,
			ans,anssum = -1;
		for (int i = 1; i <= n; i++)
		{
			cin >> now;
			if (now == last) nowsum++;
			if (now != last)
			{
				if (nowsum > anssum)
				{
					ans = last;
					anssum = nowsum;
				}
				nowsum = 1;
			}
			last = now;
		}
		if (nowsum > anssum)
		{
			ans = now;
		}
		cout << ans << endl;
	}
}
