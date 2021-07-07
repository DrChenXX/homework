#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i5 = 0; i5 * 5 <= n; i5++)
	{
		for (int i8 = 0; i8 * 8 + i5 * 5 <= n; i8++)
		{
			for (int i10 = 0; i10 * 10 + i8 * 8 + i5 * 5 <= n; i10++)
			{
				if(i5 * 5 + i8 * 8 + i10 * 10 == n)
				{
					cout << "5:" << i5
						 << " 8:" << i8
						 << " 10:" << i10
						 << endl;
				}
			}
		}
	}
	return 0;
}
