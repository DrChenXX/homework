#include<bits/stdc++.h>
using namespace std;
struct aa{
	string name;
	string a;
	int times;
};
bool cmp(aa a, aa b)
{
	if (a.times > b.times) return 1;
	return 0;
}
void Do(int n)
{
	aa now[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin,now[i].name);
		getline(cin,now[i].name);
		cin >> now[i].times;
		now[i].a = now[i].name;
		for (int j = 0; j < now[i].name.length(); j++)
		{
			if (now[i].name[j] >= 'A' && now[i].name[j] <= 'Z')
			{
				now[i].name[j] = 'a' - 'A' + now[i].name[j];
			}
		}
	}
	sort(now, now + n, cmp);
	int k;
	cin >> k; 
	getchar(); 
	while (k--)
	{
		string tar = "";
		while (tar.length() < 2)
			getline(cin,tar);
		for (int i = 0; i < tar.length(); i++)
		{
			if (tar[i] >= 'A' && tar[i] <= 'Z')
			{
				tar[i] = 'a' - 'A' + tar[i];
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (now[i].name.find(tar) != now[i].name.npos)
			{
				int pos = now[i].name.find(tar);
				if (pos != 0)
				{
					if (now[i].name[pos - 1] != ' ') continue;
				}
				if (pos + tar.length() < now[i].name.length())
				{
					if (now[i].name[pos + tar.length()] != ' ') continue;
				}
				cout << now[i].a << endl;
			}
		}
		cout << "***" << endl;
	}
	cout << "---" << endl;
	return;
}
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	while (n)
	{
		Do(n);
		cin >> n;
	}
	return 0;
}
