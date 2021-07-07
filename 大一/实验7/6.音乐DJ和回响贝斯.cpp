#include<iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	bool flag = 1;
	for (int i = 0; i < a.length(); i++)
	{
		if (   a[i] == 'W' && a[i + 1] == 'U'
			&& a[i + 2] == 'B')
			{
				if (i != 0 && flag)
				{
					cout << " ";
					flag = 0;
				}
				i += 2;
			}
		else
		{
			cout << a[i];
			flag = 1;
		}
	}
	return 0;
}
