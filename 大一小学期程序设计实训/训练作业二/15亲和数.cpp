#include<bits/stdc++.h>
using namespace std;
int Do(int now)
{
	int i;
	int ans = 1;
	for (i = 2; i * i < now; i++)
	{
		if (now % i == 0) ans += (i + now / i);
	}
	if (i * i == now) ans += i;
	return ans;
}
int main()
{
	int a,b;
	while (cin >> a >> b)
	{
		int a1 = Do(a),
			b1 = Do(b);
//		cout << a1 << " " << b1 << endl; 
		if (a1 == b && b1 == a) cout << "YES" << endl;
		else  cout << "NO" << endl; 
	}
	return 0;
}
