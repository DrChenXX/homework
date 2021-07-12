#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin >> n >> k;
	long long a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	long long now = unique(a, a + n) - a;
	cout << a[0];
	for (int i = 1; i < min(k,now); i++)
		cout << " " << a[i];
	return 0;
}
