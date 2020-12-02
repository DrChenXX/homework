#include<iostream>
#include<string>
using namespace std;
bool judge(char a)
{
	if (a == 'a' || a == 'o' ||
		a == 'u' || a == 'i' ||
		a == 'e')
		{
			return 1;
		}
	return 0;
}
int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (!judge(a[i]))
		{
			if (a[i] == 'n')
			{
				continue;
			}
			if (i == a.length() - 1)
			{
				cout << "NO";
				return 0;
			}
			else
			{
				if (!judge(a[i + 1]))
				{
					cout << "NO";
					return 0;
				}
			}
		}
	}
	cout << "YES";
	return 0;
}
