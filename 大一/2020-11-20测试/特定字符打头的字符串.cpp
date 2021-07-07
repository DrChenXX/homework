#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	getchar();
	string str[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin,str[i]);
	}
	string want;
	getline(cin,want);
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i][0] == want[0])
		{
			ans++;
		}
	}
	cout << ans << endl;
	for (int i = 0; i < n; i++)
	{
		if (str[i][0] == want[0])
		{
			cout << str[i] << endl;
		}
	}
	return 0;
}
