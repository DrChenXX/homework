#include<bits/stdc++.h>
using namespace std;
struct pp{
	string data;
	int ans;
};
int Get(string now)
{
	int ans = 0;
	for (int i = 0; i < now.length() - 1; i++)
	{
		for (int j = i + 1; j < now.length(); j++)
		{
			if (now[i] > now[j]) ans++;
		}
	}
	return ans;
}
bool cmp(pp a, pp b)
{
	if (a.ans < b.ans) return 1;
	return 0;
}
int main()
{
	int n,m;
	cin >> n >> m;
	pp now[m + 1];
	for (int i = 1; i <= m; i++)
	{
		cin >> now[i].data;
		now[i].ans = Get(now[i].data);
	}
	sort(now + 1, now + m + 1, cmp);
	for (int i = 1; i <= m; i++)
	{
		cout << now[i].data << endl;
	}
	return 0;
}
