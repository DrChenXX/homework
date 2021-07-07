#include<iostream>
using namespace std;
bool check(int a)
{
	if (a == 0) return 1;
	if (a % 10 == 1)
	{
		return check(a / 10);
	}
	if (a % 100 == 14)
	{
		return check(a / 100);
	}
	if (a % 1000 == 144)
	{
		return check(a / 1000);
	}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	if (check(n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
