#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cin >> a >> b;
	int length = 1;
	while ( a[a.length() - length] == b[b.length() - length] 
			&& length <= a.length() && length <= b.length())
	{
		length++;
	}
	length--;
	cout << a.length() + b.length() - 2 * length;
	return 0;
}
