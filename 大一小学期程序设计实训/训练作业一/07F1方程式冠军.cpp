#include<bits/stdc++.h>
using namespace std;
struct pp{
	string name;
	int score;
	int rank[21];
};
int a[101];
pp now[101];
int nownum = 0;
int num(string s)
{
	for (int i = 1; i <= nownum; i++)
	{
		if (now[i].name == s) return i;
	}
	now[++nownum].name = s;
	return nownum;
}
bool cmprank(pp a, pp b, int pos)
{
	if (pos == 21) return 0;
	if (a.rank[pos] > b.rank[pos]) return 1;
	if (a.rank[pos] < b.rank[pos]) return 0;
	return cmprank(a,b,pos + 1);
}
bool cmp1(pp a, pp b)
{
	if (a.score > b.score) return 1;
	if (a.score < b.score) return 0;
	return cmprank(a,b,1);
}
bool cmp2(pp a, pp b)
{
	if (a.rank[1] > b.rank[1]) return 1;
	if (a.rank[1] < b.rank[1]) return 0;
	if (a.score > b.score) return 1;
	if (a.score < b.score) return 0;
	return cmprank(a,b,2); 
}
int main()
{
	a[1] = 25;
	a[2] = 18;
	a[3] = 15;
	a[4] = 12;
	a[5] = 10;
	a[6] = 8;
	a[7] = 6;
	a[8] = 4;
	a[9] = 2;
	a[10] = 1;
	for (int i = 11; i <= 100; i++)
		a[i] = 0; 
	for (int i = 1; i <= 100; i++)
	{
		now[i].score = 0;
		for (int j = 1; j <= 20; j++)
		{
			now[i].rank[j] = 0;
		}
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		for (int i = 1; i <= n; i++)
		{
			cin >> s;
			int dri = num(s);
			now[dri].score += a[i];
			now[dri].rank[i]++;
		}
	}
	sort(now + 1, now + nownum + 1, cmp1);
	cout << now[1].name << endl;
	sort(now + 1, now + nownum + 1, cmp2);
	cout << now[1].name;
	return 0;
}
