#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int n,m;
	while (T--)
	{
		cin >> n >> m;
		if (m == 14)
		{
			if (n % m == 13)
			{
				cout << n / m + 2;
			}
			else if (n % m == 0)
			{
				cout << n / m;
			}
			else
			{
				cout << n / m + 1;
			}
		}
		else if (m != 13)
		{
			if (n % m == 0)
			{
				cout << n / m;
			}
			else
			{
				cout << n / m + 1; 
			}
		}
		else
		{
			if (n % 12 == 0)
			{
				cout << n / 12;
			}
			else
			{
				cout << n / 12 + 1;
			}
		}
		cout << endl;
	}
	return 0;
}
