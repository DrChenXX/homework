#include<iostream>
using namespace std;
int main()
{
	char s[15],a;
	a = getchar();
	int now = 1; 
	if (a == '-')
	{
		while (true)
		{
			a = getchar();
			if (a < 48 || a > 57) break;
			s[now++] = a;
		}
		cout << '-';
		long long res = 0;
		for (int i = now - 1; i >= 1; i--)
		{
			res *= (long long)10;
			res += (long long)s[i] - (long long)48;
			if (res > 2147483648)
			{
				cout << 0;
				return 0;
			}
		}
		cout << res;
	}
	else
	{
		while (true)
		{
			s[now++] = a;
			a = getchar();
			if (a < 48 || a > 57) break;
		}
		long long res = 0;
		for (int i = now - 1; i >= 1; i--)
		{
			res *= (long long)10;
			res += (long long)s[i] - (long long)48;
			if (res > 2147483647)
			{
				cout << 0;
				return 0;
			}
		}
		cout << res;
	}
	return 0;
}

