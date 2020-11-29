#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num,sum;
	while(n--)
	{
		cin >> num;
		sum = 0;
		if (num % 3 != 0)
		{
			cout << "sorry!";
		}
		else
		{
			for (int i = 1; i <= 4; i++)
			{
				sum += num % 10;
				num /= 10;
			}
			if (sum % 4 != 0)
			{
				cout << "sorry!";
			}
			else
			{
				cout << "congratulation!";
			}
		}
		cout << endl;
	}
	return 0;
}
