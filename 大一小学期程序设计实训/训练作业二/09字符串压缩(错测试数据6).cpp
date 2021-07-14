#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin >> n >> a >> b;
	string s;
	cin >> s;
	int ans = a;
	for (int i = 1; i < n; i++)
	{
		bool flag = 1;
		string s1 = s.substr(0,i);
		for (int j = 1; j < n; j++)
		{
			string s2 = s.substr(i,n - j);
			if (s1.find(s2) != s1.npos)
			{
				int len = s2.length();
				if (len * a >= b)
				{
					flag = 0;
					ans += b;
					i += len - 1;
					break;
				}
			}
		}
		if (flag)
		{
			ans += a;
		}
	}
	cout << ans; 
	return 0;
}
