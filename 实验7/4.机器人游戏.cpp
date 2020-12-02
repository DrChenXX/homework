#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string now;
		cin >> now;
		int pos = - 99999999,
			size = 0;
		for (int i = 0; i < now.length(); i++)
		{
			if (now[i] >= '0' && now[i] <= '9')
			{
				int Pos = i,
					Size = now[i] - '0';
				if (pos + size >= Pos - Size)
				{
					cout << "unsafe" << endl;
					goto ha;
				}
				pos = Pos;
				size = Size;
			}
		}
		cout << "safe" << endl;
		ha: ;
	}
	return 0;
}
