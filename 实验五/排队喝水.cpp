#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int n;
	while (T--)
	{
		cin >> n;
		int now = 0, l, r;
		for (int i = 1; i <= n; i++)
		{
			cin >> l >> r;
			if (r < now)
			{
				cout << 0 << " ";
			}
			else if (l > now)
			{
				now = l;
				cout << now << " ";
				now++;
			}
			else
			{
				cout << now << " ";
				now++;
			}
		}
		cout << endl;
	}
	return 0;
}
