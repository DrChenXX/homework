#include<iostream>
#include<algorithm>
using namespace std;
struct pp{
	int a1,a2;
	int num;
};
bool cmp(pp a,pp b)
{
	if (a.a1 > b.a1)
	{
		return 1;
	}
	else if (a.a1 == b.a1)
	{
		if (a.a2 > b.a2)
		{
			return 1;
		}
		else if (a.a2 == b.a2)
		{
			if (a.num < b.num)
			{
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	int a[1005] = {0};
	int now;
	for (int i = 1; i <= n; i++)
	{
		cin >> now;
		a[now]++;
	}
	cin >> n;
	pp mov[n];
	for (int i = 0; i < n; i++)
	{
		cin >> now;
		mov[i].a1 = a[now];
		mov[i].num = i + 1;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> now;
		mov[i].a2 = a[now];
	}
	sort(mov,mov+n,cmp);
	if (mov[0].a1 == 0 && mov[0].a2 == 0)
	{
		cout << "unsatisfied";
		return 0;
	}
	cout << mov[0].num;
	int a1 = mov[0].a1,
		a2 = mov[0].a2;
	now = 1;
	while (a1 == mov[now].a1 && a2 == mov[now].a2)
	{
		cout << " " << mov[now++].num;
	}
	return 0;
}
