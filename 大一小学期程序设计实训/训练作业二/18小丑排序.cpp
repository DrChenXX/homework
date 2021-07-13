#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int j = 1;
	while (n)
	{
		string a[n + 1];
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		cout << "set-" << j << endl;
		for (int i = 1; i <= n; i += 2)
		{
			cout << a[i] << endl;
		}
		if (n % 2)
		{
			for (int i = n - 1; i >= 1; i -= 2)
			{
				cout << a[i] << endl;
			}
		}
		else
		{
			for (int i = n; i >= 1; i -= 2)
			{
				cout << a[i] << endl;
			}
		}
		j++;
		cin >> n; 
	}
	return 0;
}
