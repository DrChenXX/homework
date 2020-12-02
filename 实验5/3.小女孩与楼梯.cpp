#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	int last, now, ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
		{
			ans++;
		}
	}
	cout << ans << endl;
	now = a[0];
	for (int i = 1; i < n; i++)
	{
		last = now;
		now = a[i];
		if (now == 1)
		{
			cout << last << " "; 
		}
	}
	cout << now;
	return 0;
}
