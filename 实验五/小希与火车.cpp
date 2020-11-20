#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int L, v, l, r, see;
	while (T--)
	{
		cin >> L >> v >> l >> r;
		see = 0;
		for (int i = v; i <= L; i = i + v)
		{
			if (i < l || i > r)
			{
				see++;
			}
		}
		cout << see << endl;
	}
	return 0;
}
