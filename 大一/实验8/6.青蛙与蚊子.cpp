#include<iostream>
#include<algorithm>
using namespace std;
struct Frog{
	int pos,len;
	int ans,num;
};
struct Mos{
	int pos,wei;
	bool is;
};
bool cmp1(Frog a,Frog b)
{
	if (a.pos < b.pos)
	{
		return 1;
	}
	return 0;
}
bool cmp2(Frog a,Frog b)
{
	if (a.num < b.num)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n,m;
	cin >> n >> m;
	Frog a[n + 1];
	Mos b[m + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].pos >> a[i].len;
		a[i].len += a[i].pos;
		a[i].num = i;
		a[i].ans = 0;
	}
	sort(a + 1, a + n + 1, cmp1);
	for (int i = 1; i <= m; i++)
	{
		cin >> b[i].pos >> b[i].wei;
		b[i].is = 0;
	}
	for (int q = 1; q <= m; q++)
	{
		for (int i = 1; i <= m; i++)
		{
			if (b[i].is) continue;
			for (int j = 1; j <= n; j++)
			{
				if (b[i].pos >= a[j].pos && b[i].pos <= a[j].len)
				{
					a[j].ans++;
					a[j].len += b[i].wei;
					b[i].is = 1;
					break;
				}
			}
		}
	}
	sort(a + 1, a + n + 1, cmp2);
	for (int i = 1; i <= n; i++)
	{
		cout << a[i].ans << " " << a[i].len - a[i].pos << endl;
	}
	return 0;
}
