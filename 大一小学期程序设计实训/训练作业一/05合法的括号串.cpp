#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin >> T; 
	while (T--)
	{
		string s;
		cin >> s;
		char front[s.length()];
		int last = 0;
		bool flag = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '<' || s[i] == '(' ||
				s[i] == '{' || s[i] == '[') front[++last] = s[i];
			if (s[i] == '>')
			{
				if (front[last] != '<')
				{
					flag = 1;
					break; 
				}
				last--;
			}
			if (s[i] == ')')
			{
				if (front[last] != '(')
				{
					flag = 1;
					break; 
				}
				last--;
			}
			if (s[i] == '}')
			{
				if (front[last] != '{')
				{
					flag = 1;
					break; 
				}
				last--;
			}
			if (s[i] == ']')
			{
				if (front[last] != '[')
				{
					flag = 1;
					break; 
				}
				last--;
			}
		}
		if (!flag && last == 0) cout << "Yes" << endl;
		else cout << "No" << endl;	
	}
	return 0;
}
