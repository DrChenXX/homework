#include<bits/stdc++.h>
using namespace std;
string add(string s1,string s2)
{
	int jin = 0;
	for (int i = s1.length() - 1; i >= 0; i--)
	{
		int now = jin + s1[i] + s2[i] - 2 * '0';
		s1[i] = now % 10 + '0';
		jin = now / 10;
	}
	return s1;
}
int main()
{
	string n;
	cin >> n;
	string now = n;
	string a = now;
	n.append(n);
	for (int i = 2; i <= now.length(); i++)
	{
		now = add(now,a);
		int flag = n.find(now);
		if (flag == -1)
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
