#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,m;
	cin >> x >> m;
	x = abs(x);
	m = 2 * m - 1;
	int ans = 0;
	while(x)
	{
		if (x >= m)
		{
			ans = ans + x / m;
			x = x % m;
		}
		else
		{
			m -= 2;
		}
	}
	cout << ans;
	return 0;
}
