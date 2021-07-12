#include<bits/stdc++.h>
using namespace std;
int main()
{
	string now;
	while (getline(cin,now))
	{
		
		for (int i = now.length() - 1; i >= 0; i--)
		{
			if (now[i] == ' ')
			{
				for (int j = i + 1; j < now.length(); j++)
				{
					if (now[j] == ' ') break;
					cout << now[j];
				}
				cout << " ";
			}
		}
		for (int i = 0; i < now.length(); i++)
		{
			if (now[i] == ' ') break;
			cout << now[i];
		}
		cout << endl;
	}
	return 0;
}
