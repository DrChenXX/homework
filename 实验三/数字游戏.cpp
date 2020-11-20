#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while ((n/10))
	{
		cout << n << " ";
		int a = 1,
			b = n;
		while (b)
		{
			int c = b % 10;
			if (c)
			{
				a *= c;
			}
			b /= 10;
		}
		n = a;
	}
	cout << n;
	return 0;
}
