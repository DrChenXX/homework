#include<iostream>
#include<algorithm>
using namespace std;
struct pp
{
	int num,pos;
};
bool cmp(pp a,pp b)
{
	if (a.pos < b.pos)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n,Pos;
	cin >> n >> Pos;
	pp a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].pos;
		a[i].pos -= Pos;
		if (a[i].pos < 0)
		{
			a[i].pos *= (-1);
		}
		a[i].num = i + 1;
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < 3; i++)
	{
		cout << a[i].num << " ";
	}
	return 0;
}
