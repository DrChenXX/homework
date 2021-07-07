#include<iostream>
using namespace std;
int main()
{
	int T, n, m;
	int hang[1005], lie[1005];
	char now = 0;
	cin >> T;
	while (T--)
	{
		cin >> n >> m;
		getchar();
		for (int i = 1 ;i <= n; i++)
		{
			hang[i] = 0;
		}
		for (int i = 1; i <= m; i++)
		{
			lie[i] = 0;
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				now = getchar();
				if (now == '*')
				{
					hang[i]++;
					lie[i]++;
				}
			}
			getchar();
		}
		bool flag = 1;
		int num1 = 0,num2 = 0;
		for (int i = 1; i <= n; i++)
		{
			if (hang[i] != 0)
			{
				num1++;
			}
			if (hang[i] >= 2)
			{
				num2++;
			}
		}
		if (num1 >= 3)
		{
			flag = 0;
		}
		else if (num2 >= 2)
		{
			flag = 0; 
		}
		else
		{
			flag = 1;
		}
		if (flag)
		{
			cout << "YES" << endl;
			continue;
		}
		num1 = 0;
		num2 = 0;
		for (int i = 1; i <= m; i++)
		{
			if (lie[i] != 0)
			{
				num1++;
			}
			if (lie[i] >= 2)
			{
				num2++;
			}
		}
		if (num1 >= 3)
		{
			flag = 0;
		}
		else if (num2 >= 2)
		{
			flag = 0; 
		}
		else
		{
			flag = 1;
		}
		if (flag)
		{
			cout << "YES" << endl;
			continue;
		}
		cout << "NO" << endl;
	}
	return 0;
}
