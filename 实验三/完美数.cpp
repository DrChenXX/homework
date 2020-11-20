#include<iostream>
using namespace std;
int main()
{
	int n,m,i;
	cin >> n;
	if (n == 1)
	{
		cout << "false";
		return 0;
	}
	m = 1;
	for (i = 2; i * i < n; i++)
	{
		if (!(n % i))
		{
			m += i + (n / i);
		}
	}
	if(n == i * i)
	{
		m += i;
	}
	if (n == m)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	return 0;
}
