#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		cout << a << " " << 1;
	}
	else if(b >= a && b >= c)
	{
		cout << b << " " << 2;
	}
	else
	{
		cout << c << " " << 3;
	}
	return 0;
}

