#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string c;
	getline(cin,c);
	int len = c.length();
	int j, k;
	for (int i = 1; i <= len; i++)
	{
		if (len % i == 0)
		{
			j = 0;
			k = i - 1;
			while (j < k)
			{
				swap(c[j], c[k]);
				j++;
				k--;
			}
		}
	}
	cout << c;
	return 0;
}
