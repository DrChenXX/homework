#include<bits/stdc++.h>
using namespace std;
struct people
{
    char id[19];                  /* ���֤���� */
    int social;                     /* �籣�������� */
    int area;                       /* ����ס����� */
    char date[11];              /* �걨���� */
};
people* getMess(int &n);

bool string_char(string now,char id[19])
{
	for (int i = 0; i < 18; i++)
	{
		if (now[i] != id[i]) return 0;
	}
	return 1;
}
int day(char date[11])
{
	return  date[6] * 10000000 + date[7] * 1000000 + 
			date[8] * 100000 + date[9] * 10000 +
			date[0] * 1000 + date[1] * 100 +
			date[3] * 10 + date[4];
}
int judge(people now)
{
	if (now.area == 0 && now.social > 24) return 2;
	if (now.social > 24) return 1;
	return 0;
}
int left1(int pos,people now[])
{
	while (pos >= 1)
	{
		int d1 = day(now[pos - 1].date),
			d2 = day(now[pos].date);
		if (now[pos - 1].social == now[pos].social &&
			now[pos - 1].area == now[pos].area &&
			d1 == d2) pos--;
		else break;
	}
	return pos;
}
int left2(int pos,people now[])
{
	while (pos >= 1)
	{
		int d1 = day(now[pos - 1].date),
			d2 = day(now[pos].date);
		if (now[pos - 1].social == now[pos].social &&
			now[pos - 1].area == now[pos].area &&
			d1 == d2 && judge(now[pos - 1]) != 2) pos--;
		else break;
	}
	return pos;
}
int right1(int pos,people now[],int n)
{
	while (pos < n)
	{
		int d1 = day(now[pos + 1].date),
			d2 = day(now[pos].date);
		if (now[pos + 1].area == now[pos].area &&
			d1 == d2 && judge(now[pos + 1]) == 2) pos++;
		else break;
	}
	return pos;
}
int right2(int pos,people now[],int n)
{
	while (pos < n)
	{
		int d1 = day(now[pos + 1].date),
			d2 = day(now[pos].date);
		if (now[pos + 1].area == now[pos].area &&
			d1 == d2) pos++;
		else break;
	}
	return pos;
}
bool cmp(people a,people b)
{
	if (judge(a) > judge(b)) return 1;
	if (judge(a) < judge(b)) return 0;
	if (judge(a) == judge(b) && judge(a) == 2)
	{
		if (a.social > b.social) return 1;
		if (a.social < b.social) return 0;
	}
	else if (judge(a) == judge(b))
	{
		if (a.area < b.area) return 1;
		if (a.area > b.area) return 0;
		if (a.social > b.social) return 1;
		if (a.social < b.social) return 0;
	}
	int d1 = day(a.date),
		d2 = day(b.date);
	if (d1 < d2) return 1;
	if (d1 > d2) return 0;
	return 1;
}
int main()
{
    people *person;          /* ָ�����б����˵Ļ��������׵�ַ��ͨ�����ú���getMess��ȡ */     
    int n;                            /* nΪ����������ͨ�����ú���getMess��ȡ */
    person=getMess(n);
//    cout << n << endl;
	sort(person,person + n,cmp);
//	for (int i = 0; i < n; i++)
//	{
//		cout << person[i].id << " " 
//			 << person[i].social << " "
//			 << person[i].area << " "
//			 << person[i].date << endl; 
//	}
    int m,t;
	cin >> m >> t;
	string now;
	while (t--)
	{
		cin >> now;
		int pos;
		for (int i = 0; i < n; i++)
		{
			if (string_char(now,person[i].id))
			{
				pos = i;
				break;
			}
		}
		int l,r;
		if (judge(person[pos]) == 2)
		{
			l = left1(pos,person) + 1;
			r = right1(pos,person,n) + 1;
		}
		else
		{
			l = left2(pos,person) + 1;
			r = right2(pos,person,n) + 1;
		}
		if (l > m)
		{
			cout << "Sorry" << endl;
		}
		if (l <= m && r > m)
		{
			cout << (m - l + 1) << "/" << (r - l + 1) << endl;
		}
		if (r <= m)
		{
			if (l == r) cout << l << endl;
			if (l != r) cout << l << " " << r << endl;
		}
	}
	return 0;
}

people* getMess(int &n)            /* ���ļ����ݶ����ڴ� */
{
    FILE *fp;
    fp=fopen("house.bin","rb");
    fseek(fp,-1*(long)sizeof(int), 2);
    fread(&n, sizeof(int),1, fp);
    rewind(fp);
    people *tmp=new people[n];
    fread(tmp, sizeof(people), n, fp);
    fclose(fp);
    return tmp;
}
