#include<bits/stdc++.h>
using namespace std;
struct pp
{
	string name;
	int point;
	int win;
	int score;
};
int num(string s,pp* a,int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].name == s) return i;
	}
}
bool cmp(pp a,pp b)
{
	if (a.point > b.point) return 1;
	if (a.point < b.point) return 0;
	if (a.win > b.win) return 1;
	if (a.win < b.win) return 0;
	if (a.score >= b.score) return 1;
	return 0;
}
bool cmp3(pp a,pp b,int pos)
{
	if (pos > b.name.length()) return 0;
	if (pos > a.name.length()) return 1; 
	if (a.name[pos] > b.name[pos]) return 0;
	if (a.name[pos] < b.name[pos]) return 1;
	return cmp3(a,b,pos + 1);
}
bool cmp2(pp a,pp b)
{
	return cmp3(a,b,0);
}
int main()
{
	int n;
	cin >> n;
	pp now[n];
	for (int i = 0; i < n; i++)
	{
		cin >> now[i].name;
		now[i].point = 0;
		now[i].win = 0;
		now[i].score = 0;
	}
	string s,s1,s2;
	char a;
	int p1,p2,t1,t2;
	for (int i = 1; i <= n * (n - 1) / 2; i++)
	{
		cin >> s >> p1 >> a >> p2;
		int pos;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '-')
			{
				pos = j;
				break;
			}
		}
		s1 = s.substr(0,pos);
		s2 = s.substr(pos + 1, s.length() - pos - 1);
		//cout << "s1name:" << s1 << " s2name:" << s2 << endl;
		t1 = num(s1,now,n);
		t2 = num(s2,now,n);
		if (p1 > p2) now[t1].point += 3;
		if (p1 < p2) now[t2].point += 3;
		if (p1 == p2)
		{
			now[t1].point++;
			now[t2].point++;
		}
		now[t1].win += p1 - p2;
		now[t2].win += p2 - p1;
		now[t1].score += p1;
		now[t2].score += p2;
		/*
		cout << now[t1].name << " "
			 << now[t1].point << " "
			 << now[t1].win << endl
			 << now[t2].name << " "
			 << now[t2].point << " "
			 << now[t2].win << endl; 
		*/
	}
	
	
	sort (now,now + n,cmp);
	sort (now,now + n/2,cmp2);
	for (int i = 0; i < n/2; i++)
		cout << now[i].name << endl;
	return 0;
}
