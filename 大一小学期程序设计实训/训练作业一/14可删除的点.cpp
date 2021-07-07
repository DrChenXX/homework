#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int l = 0, r = 0;
	long long x,y;
	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;
		if (x > 0) r++;
		else l++;
	} 
	if (r >= n - 1 || l >= n - 1) cout << "Yes";
	else cout << "No";
	return 0;
}
