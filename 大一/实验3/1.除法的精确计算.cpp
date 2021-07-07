#include<iostream>
using namespace std;
int main()
{
	int A,B,N;
	cin >> A >> B >> N;
	cout << (int)A / B;
	A = (A % B) * 10;
	cout << '.';
	while(N--)
	{
		cout << (int)A / B;
		A = (A % B) * 10;
	}
	return 0;
}
