#include<iostream>
using namespace std;
int main()
{
	int t, a, b, nowa, nowb, now;
	cin >> t;
	for (register int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		nowa = 0, nowb = 0, now = 1;
		while(nowa <= a && nowb <= b)
		{
			if (now % 2)
			{
				nowa = nowa + now;
			}
			else
			{
				nowb = nowb + now;
			}
			now++;
		}
		if (nowa > a)
		{
			cout << "Bob" << endl;
		}
		else
		{
			cout << "Limak" << endl;
		}
	}
	return 0;
}

