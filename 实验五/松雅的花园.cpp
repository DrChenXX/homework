#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int n,k;
	while (t--)
	{
		cin >> n >> k;
		int a[n + 1];
		int now;
		cin >> now;
		for (int i = now; i >= 1; i--)
		{
			a[i] = now - i + 1;
		}
		for (int i = now; i <= n; i++)
		{
			a[i] = i - now + 1;
		}
		for (int i = 2; i <= k; i++)
		{
			cin >> now;
			for (int i = now; i >= 1; i--)
			{
				if (a[i] <= now - i + 1)
				{
					break;
				}
				a[i] = now - i + 1; 
			}
			for (int i = now + 1; i <= n; i++)
			{
				if (a[i] <= i - now + 1)
				{
					break;
				}
				a[i] = i - now + 1;
			}
		}
		int ans = 0;
		for (int i = 1; i <= n; i++)
		{
			if(a[i] > ans)
			{
				ans = a[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
