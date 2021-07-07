#include<iostream>
using namespace std;
struct pp
{
	int a[3];
};
int main()
{
	int n;
	cin >> n;
	pp peo[n];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> peo[j].a[i];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			for (int k = 0 ; k < 3; k++)
			{
				if (peo[i].a[k] >= peo[j].a[k]) break; 
				if (k == 2)
				{
					ans++;
					goto ha;
				}
			}
		}
		ha: ;
	}
	cout << ans;
	return 0;
}
