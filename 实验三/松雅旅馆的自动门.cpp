#include<iostream>
using namespace std;
int main()
{
	int n,m,a,d;
	cin >> n >> m >> a >> d;
	int nown = 1,nowmtime,nowmnum = 1;
	int now;
	int num = 0;
	if (n == 0)
	{
		cin >> nowmtime;
		now = nowmtime;
		num ++;
		for (int i = 2; i <= m; i++)
		{
			cin >> nowmtime;
			if (now + d < nowmtime)
			{
				now = nowmtime;
				num ++;
			}
		}
		cout << num;
		return 0;
	}
	if (m == 0)
	{
		now = nown * a;
		num ++;
		while (nown <= n)
		{
			if (now + d < nown * a)
			{
				now = nown * a;
				num ++; 
			}
			nown++;
		}
		cout << num;
		return 0;
	}
	cin >> nowmtime;
	if (nown * a >= nowmtime)
	{
		now = nowmtime;
		nowmnum ++;
		cin >> nowmtime;
		num ++;
	}
	else
	{
		now = nown * a;
		nown ++;
		num ++;
	}
	while (nowmnum < m && nown < n)
	{
		if (nown * a >= nowmtime)
		{
			if (now + d < nowmtime)
			{
				now = nowmtime;
				num++;
			}
			nowmnum ++;
			cin >> nowmtime;
		}
		else
		{
			if (now + d < nown * a)
			{
				now = nown * a;
				num++;
			}
			nown ++;
		}
	}
	while (nowmnum < m)
	{
		if (now + d < nowmtime)
		{
			now = nowmtime;
			num++;
		}
		nowmnum ++;
		cin >> nowmtime;
	}
	while (nown < n)
	{
		if (now + d < nown * a)
		{
			now = nown * a;
			num++;
		}
		nown ++;
	}
	if (now + d < nowmtime)
	{
		now = nowmtime;
		num++;
	}
	if (now + d < nown * a)
	{
		now = nown * a;
		num++;
	}
	cout << num;
	return 0;
}
