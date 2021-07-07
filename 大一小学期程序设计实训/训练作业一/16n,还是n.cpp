#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m; 
	cin >> m >> n;
	string tar = to_string(n);
	string now;
	if (n > m) return 0;
	cout << n;
	for (int i = n + 1; i <= m; i++)
	{
		if (i % n == 0)
		{
			cout << " " << i;
			continue; 
		}
		now = to_string(i);
		int Now = now.find(tar);
		if (Now != -1) cout << " " << i;
	}
	return 0;
}
