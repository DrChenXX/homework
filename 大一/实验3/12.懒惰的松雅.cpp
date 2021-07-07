#include<iostream>
using namespace std;
bool judge(int a)
{
	if (a % 10 == 7 || a / 10 == 7) return 1;
	else return 0;
}
int main()
{
	int x,h,m;
	int now = 0;
	cin >> x >> h >> m;
	while(true)
	{
		if (judge(h) || judge(m))
		{
			cout << now;
			return 0;
		}
		m -= x;
		now ++;
		if (m < 0)
		{
			m += 60;
			h--;
			if (h <= -1)
			{
				h += 24;
			}
		}
	}
	return 0;
}
