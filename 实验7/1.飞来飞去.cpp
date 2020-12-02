#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int last,now,n,
		stot,ttos;
	while (T--)
	{
		stot = 0;
		ttos = 0;
		cin >> n;
		getchar();
		now = getchar();
		for (int i = 1; i < n; i++)
		{
			last = now;
			now = getchar();
			if (last == 'S' && now == 'T')
			{
				stot++;
			}
			if (last == 'T' && now == 'S')
			{
				ttos++;
			}
		}
		if (stot > ttos)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
