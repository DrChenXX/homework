#include<iostream>
#include<algorithm>
using namespace std;
struct pp
{
	int num;
	int point;
	int rank;
};
bool cmp1(pp a, pp b)
{
	if (a.point > b.point)
	{
		return 1;
	}
	return 0;
}
bool cmp2(pp a, pp b)
{
	if (a.num < b.num)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	pp a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].point;
		a[i].num = i;
	}
	sort(a, a + n, cmp1);
	int Rank = 1;
	a[0].rank = Rank;
	for (int i = 1; i < n; i++)
	{
		if (a[i].point == a[i - 1].point)
		{
			a[i].rank = Rank;
		}
		else
		{
			a[i].rank = ++Rank;
		}
	}
	sort(a, a + n, cmp2);
	for (int i = 0; i < n; i++)
	{
		cout << a[i].rank << " ";
	}
	return 0;
}
