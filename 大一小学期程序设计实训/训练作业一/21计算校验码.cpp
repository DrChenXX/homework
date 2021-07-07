#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100];
	int t,B;
	string N;
	cin >> t; 
	while (t--)
	{
		cin >> B >> N;
		int rest = 0;
		for (int i = 0; i < N.length(); i++)
		{
			rest *= B;
			if (N[i] >= '0' && N[i] <= '9')
			{
				rest += N[i] - '0';
			}
			else
			{
				rest += N[i] - 'a' + 10; 
			}
			//cout << i << ":" << rest << endl;
			rest %= (B - 1);
			//cout << i << ":" << rest << endl;
		}
		rest *= B;
		rest %= (B - 1);
		int ans = ((B - 1) - rest) % (B - 1);
		if (ans >= 0 && ans <= 9) cout << ans << endl;
		else cout << char(ans - 10 + 'a') << endl;
	}
	return 0;
}
