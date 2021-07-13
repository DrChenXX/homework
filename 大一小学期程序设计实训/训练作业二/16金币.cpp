#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10001];
	int now = 1,nownum = 0;
	a[0] = 0;
	for (int i = 1; i <= 10000; i++)
	{
		nownum++;
		a[i] = now + a[i - 1];
		if (now == nownum)
		{
			now++;
			nownum = 0;
		}
	}
	int n;
	while (cin >> n)
	{
		cout << n << " " << a[n] << endl;
	}
	return 0;
}
