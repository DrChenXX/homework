#include<iostream>
#include<iomanip>  
#include<cmath>
using namespace std;
class Point
{
	private:
		int  x;
		int  y;
	
	public:
		void setPoint();
		int getX() const;
		int getY() const;
		void myDistance(int xVal,int yVal);
};
void Point::setPoint()
{
	int a,b;
	cin >> a >> b;
	x = a;
	y = b;
}
int Point::getX() const
{
	return x;
}
int Point::getY() const
{
	return y;
}
void Point::myDistance(int xVal,int yVal)
{
	double ans = sqrt(  (x - xVal)*(x - xVal) +
						(y - yVal)*(y - yVal));
	cout << fixed << setprecision(3) << ans;
}
int  main()
{
      Point  A,B;
      A.setPoint();
      B.setPoint();
      A.myDistance(B.getX(),B.getY());
      return  0;
}
