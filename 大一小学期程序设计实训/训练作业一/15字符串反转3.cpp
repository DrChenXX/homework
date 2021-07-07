#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin >> n;
	string now;
	getline(cin,now);
	while (n--)
	{
		getline(cin,now);
		int last = 0;
		for (int i = 0; i < now.length(); i++)
		{
			if (now[i] == ' ')
			{
				for (int j = i - 1; j >= last; j--)
					cout << now[j];
				cout << " ";
				last = i + 1;
			}
		}
		for (int i = now.length() - 1; i >= last; i--)
			cout << now[i];
		cout << endl;
	}
	return 0; 
}
