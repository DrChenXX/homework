#include<iostream>
#include<algorithm>
#include<iomanip>
#include<ctime>
using namespace std;
struct c{
	string name;
	int grade;
};
bool cmp(c a,c b)
{
	if (a.grade > b.grade) return 1;
	return 0;
}
class Student{
	private:
		c *student;
	public:
		void in(int n);
		void out(int n);
		void Sort(int n);
};
void Student::in(int n)
{
	student = new c[n];
	for (int i = 0; i < n; i++)
	{
		cin >> student[i].name >> student[i].grade;
	}
}
void Student::Sort(int n)
{
	sort(student, student + n, cmp);
}
void Student::out(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << left << i + 1 << 
				setw(10) << left << student[i].name << 
				student[i].grade << endl;
	}
} 
int main()
{
	freopen("成绩表.doc","w",stdout);
	int n;
	cin >> n;
	Student a;
	a.in(n);
	a.Sort(n);
	char str[50];
	time_t now = time(NULL);
	strftime(str, 50, "%x %X", localtime(&now));
	cout << str << "测试结果" << endl;
	a.out(n);
	fclose(stdout);
	return 0;
}
