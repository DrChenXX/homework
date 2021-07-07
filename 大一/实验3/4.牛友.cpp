#include<iostream>
using namespace std;
int Sum(int a)
{
	int res = 1;
	int i;
	for (i = 2; i * i < a ; i++)
	{
		if (a % i == 0)
		{
			res += i + (a / i);
		}
	}
	if (i * i == a)
	{
		res += i;
	}
	return res;
}
int main()
{
	int s;
	cin >> s;
	while (1)
	{
		int now = Sum(s);
		if (Sum(now) == s)
		{
			cout << s << " " << now;
			break;
		}
		s++;
	}
	return 0;
}
