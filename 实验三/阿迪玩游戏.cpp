#include<iostream>
using namespace std;
int main()
{
	int N,M,a;
	cin >> N >> M; 
	int pos = 0;
	for (int i = 1; i <= M; i++)
	{
		cin >> a;
		pos += a;
	}
	pos %= 2 * N - 2;
	if (pos <= N - 1)
	{
		cout << pos + 1;
	}
	else
	{
		cout << 2 * N - 2 - pos + 1;
	}
	return 0;
}
