#include<bits/stdc++.h>
using namespace std;
void Do(int n)
{
	double a[n + 1];
	double ans,ave;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		ave += a[i];
	}
	ave /= (n / 1.0);
	for (int i = 1; i <= n; i++)
	{
		ans += (ave - a[i])*(ave - a[i]);
	}
	ans /= (n / 1.0);
	cout << floor(ans) << endl;
	return;
}
int main()
{
	int n;
	cin >> n;
	while (n)
	{
		Do(n);
		cin >> n;
	}
	return 0;
}
