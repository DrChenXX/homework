#include<iostream>
using namespace std;
bool judge(int now)
{
	int i;
	for (i = 2; i * i <= now; i++)
	{
		if(now % 2 == 0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << 1;
	}
	else if (judge(n))
	{
		cout << -1;
	}
	else
	{
		int i = 2, num = 0;
		while(n > 1)
		{
			if (judge(i) && n % i == 0)
			{
				num++;
				n = n / i;
			}
			if (n < i && n != 1)
			{
				num = 0;
				n = 1;
			}
			i++;
		}
		if (num == 0)
		{
			cout << 0;
		}
		else if (num % 2 == 0) cout << 1;
		else cout << -1;
	}
	return 0;
}
