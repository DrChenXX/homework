#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void DO(string fro,int frol,int fror,string mid,int midl,int midr)
{
	if (frol == fror)
	{
		cout << fro[frol];
		return;
	}
	char now = fro[frol];
	int flag = midl;
	while (flag <= midr)
	{
		if (now == mid[flag])
		{
			DO(fro,frol + 1, fror - (midr - flag),mid,midl,flag - 1);
			DO(fro,fror- (midr - flag) + 1,fror,mid,flag + 1,midr);
			cout << mid[flag];
		}
		flag++; 
	}
}
int main()
{
	int n;
	cin >> n;
	while (n)
	{
		cin >> s1 >> s2;
		DO(s1,0,n - 1,s2,0,n - 1);
		cout << endl;
		cin >> n;
	}
	return 0;
}
