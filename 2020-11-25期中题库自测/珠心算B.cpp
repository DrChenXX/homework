#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int ans = 0;
	for (int i = 2; i < n; i++)
	{
		for (int j = 0; j < i - 1; j++)
		{
			for (int k = j + 1; k < i; k++)
			{
				if (a[i] == a[j] + a[k])
				{
					ans++;
					goto haha;
				}
			}
		}
		haha: ;
	}
	cout << ans;
	return 0;
}
