#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[10][10];
	bool b[10][10] = {0};
	int di = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			b[i][j] = 1;
		}
	}
	int rest = n * m;
	int nown = 1,nowm = 1;
	while (rest)
	{
		cout << a[nown][nowm] << " ";
		b[nown][nowm] = 0;
		rest--;
		if(di == 1)
		{
			if(b[nown][nowm + 1])
			{
				nowm++;
			}
			else
			{
				nown++;
				di = 2;
			}
		}
		else if(di == 2)
		{
			if(b[nown + 1][nowm])
			{
				nown++;
			}
			else
			{
				nowm--;
				di = 3;
			}
		}
		else if(di == 3)
		{
			if(b[nown][nowm - 1])
			{
				nowm--;
			}
			else
			{
				nown--;
				di = 4;
			}
		}
		else
		{
			if(b[nown - 1][nowm])
			{
				nown--;
			}
			else
			{
				nowm++;
				di = 1;
			}
		}
	}
	return 0;
}
