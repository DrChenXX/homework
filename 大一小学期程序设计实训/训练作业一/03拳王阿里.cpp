#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int l,r;
		string s,e;
		cin >> s >> e >> l >> r;
		int ans = 0,last;
		int S,E;
		if (s[0] == 'm' && s[1] == 'o') S = 1;
		if (s[0] == 't' && s[1] == 'u') S = 2;
		if (s[0] == 'w' && s[1] == 'e') S = 3;
		if (s[0] == 't' && s[1] == 'h') S = 4;
		if (s[0] == 'f' && s[1] == 'r') S = 5;
		if (s[0] == 's' && s[1] == 'a') S = 6;
		if (s[0] == 's' && s[1] == 'u') S = 7;
		
		if (e[0] == 'm' && e[1] == 'o') E = 1;
		if (e[0] == 't' && e[1] == 'u') E = 2;
		if (e[0] == 'w' && e[1] == 'e') E = 3;
		if (e[0] == 't' && e[1] == 'h') E = 4;
		if (e[0] == 'f' && e[1] == 'r') E = 5;
		if (e[0] == 's' && e[1] == 'a') E = 6;
		if (e[0] == 's' && e[1] == 'u') E = 7;
		last = E - S + 1;
		while (last < l)
		{
			last += 7;
		}
		while (last <= r)
		{
			ans++;
			last += 7;
		}
		if (ans > 1) cout << "many" << endl;
		if (ans == 0) cout << "impossible" << endl;
		if (ans == 1) cout << last - 7 << endl;
	}
	return 0;
}
