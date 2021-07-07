#include<iostream>
using namespace std;
int main()
{
	int t,m;
	cin >> t >> m;
	int n,num = 1;
	int a[m + 1];
	int b[m + 1];
	for (int i = 0; i <= m; i++)
		a[i] = 0;
	string now; 
	while (t--)
	{
		cin >> now;
		if (now[0] == 'a')
		{
			cin >> n;
			if (a[m] == 0) b[m] = 1;
			else b[m] = 0;
			for (int i = m - 1; i >= 1; i--)
			{
				if (a[i] == 0)
				{
					b[i] = b[i + 1] + 1;
				}
				else b[i] = 0;
			}
			/*for (int i = 1; i <= m; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;*/
			bool flag = 1;
			for (int i = 1; i <= m - n + 1; i++)
			{
				if (b[i] >= n)
				{
					flag = 0;
					for (int j = i; j <= i + n - 1; j++)
					{
						a[j] = num;
					}
					cout << num++ << endl;
					break;
				}
			}
			if (flag)
			{
				cout << "NULL" << endl;
			}
		}
		if (now[0] == 'e')
		{
			cin >> n;
			bool flag = 1;
			for (int i = 1; i <= m; i++)
			{
				if (a[i] == n)
				{
					a[i] = 0;
					flag = 0;
				}
				//cout << a[i] << " ";
			}
			//cout << endl;
			if (flag) cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
		}
		if (now[0] == 'd')
		{
			int temp[m + 1];
			for (int i = 0; i <= m; i++)
				temp[i] = 0;
			int f1 = 1,f2 = 1;
			while (f1 <= m)
			{
				if (a[f1] != 0)
				{
					temp[f2++] = a[f1];
				}
				f1++;
			}
			for (int i = 1; i <= f2; i++)
			{
				a[i] = temp[i];
			}
			for (int i = f2 + 1; i <= m; i++)
			{
				a[i] = 0;
			}
			/*for (int i = 1; i <= m; i++)
				cout << a[i] << " ";
			cout << endl;*/
		}
	}
	return 0;
}
