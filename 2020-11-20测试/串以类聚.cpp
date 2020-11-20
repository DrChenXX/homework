#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			cout << a[i];
		}
	}
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '_')
		{
			cout << a[i];
		}
	}
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			cout << a[i];
		}
	}
	return 0;
}
