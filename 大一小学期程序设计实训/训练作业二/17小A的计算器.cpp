#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a,b;
	string big,sma;
	while(n--)
	{
		cin >> a >> b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		int jin = 0;
		char ans[10];
		for (int i = 0; i < 10; i++)
		{
			ans[i] = 'a';
			if (i < a.length())
			{
				ans[i] += a[i] - 'a';
			}
			if (i < b.length())
			{
				ans[i] += b[i] - 'a';
			}
			if (ans[i] > 'z')
			{
				ans[i] -= 26;
				jin = 1;
			}
			else jin = 0;
		}
		bool flag = 0;
		for (int i = 9; i >= 0; i--)
		{
			if (ans[i] != 'a' || flag)
			{
				flag = 1;
				cout << ans[i];
			}
		}
		cout << endl;
	}
	return 0;
}
