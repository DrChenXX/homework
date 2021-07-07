#include<iostream>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	int pos = -1, ans = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '@')
		{
			pos = i;
			int numl = 0,s = 1;
			while (pos - numl - s >= 0)
			{
				char c = a[pos - numl - s];
				if (c >= 'a' && c <= 'z')
				{
					numl++;
				}
				else if (c >= '0' && c <= '9' || c == '_' )
				{
					s++;
					continue;
				}
				else
				{
					break;
				}
			}
			if (numl == 0)
			{
				goto ha;
			}
			int pos_ = pos + 1;
			while (pos_ < a.length())
			{
				if (a[pos_] == '.')
				{
					break;
				}
				pos_++;
			}
			if (pos_ == a.length() || pos_ == pos + 1)
			{
				goto ha;
			}
			for (int i = pos + 1; i < pos_; i++)
			{
				if (a[i] >= 'a' && a[i] <= 'z')
				{
					continue;
				}
				else if (a[i] >= '0' && a[i] <= '9')
				{
					continue;
				}
				else
				{
					goto ha;
				}
			}
			int numr = 0;
			while(pos_ + numr + 1 < a.length())
			{
				char c = a[pos_ + numr + 1];
				if (c >= 'a' && c <= 'z')
				{
					numr++;
				}
				else
				{
					break;
				}
			}
			if (numr == 0)
			{
				goto ha;
			}
			ans += numl * numr;
		}
		ha: ;
	}
	if (pos == -1)
	{
		cout << 0;
	}
	else cout << ans;
	return 0;
}
