#include<iostream>
#include<algorithm>
using namespace std;
struct pp{
	string name;
	int score;
};
bool cmp(pp a, pp b)
{
	if (a.score > b.score)
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
	int Max,Min,now;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].name;
		a[i].score = 0;
		Max = 0,Min = 100;
		for (int j = 1; j <= 7; j++)
		{
			cin >> now;
			Max = max(Max,now);
			Min = min(Min,now);
			a[i].score += now;
		}
		a[i].score -= Max + Min;
	}
	sort(a,a+n,cmp);
	for (int i = 0; i < n; i++)
	{
		cout << a[i].name << " " << a[i].score << endl;
	}
	return 0;
}
