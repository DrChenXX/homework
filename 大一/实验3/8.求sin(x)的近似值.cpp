#define Pai 3.1415926535
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	long double v , x , sinx = 0;
	long long n = 1, sign = 1;
	cin >> x;
	x = x - ( (long)(x / (2 * Pai)) ) * 2 * Pai;
	v = x;
	do
	{
		sinx += sign * v;
		v *= (x * x / (2 * n * (2 * n + 1)));
		sign = -sign;
		n++;
	}while(fabs(v) >= 0.5e-7);
	cout << fixed << setprecision(6) << sinx << endl;
	return 0;
} 
