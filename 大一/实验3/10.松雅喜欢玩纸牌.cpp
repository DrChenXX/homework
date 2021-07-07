#include<iostream>
using namespace std;
int main()
{
	char a1,a2,b1,b2;
	cin >> a1 >> a2;
	for (int i = 1; i <= 5; i++)
	{
		cin >> b1 >> b2;
		if (a1 == b1 || a2 == b2)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}

