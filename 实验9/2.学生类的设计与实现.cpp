#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student
{
	private:
		string name;
		double grade;
	public:
		Student()
		{
			cin >> name >> grade;
		}
		double getgrade()
		{
			return grade;
		}
		void outname()
		{
			cout << setw(12) << left << name;
		}
		void outgrade()
		{
			cout << fixed << setprecision(1) << grade << endl;
		}
};
void pass(Student *pStu, int size)
{
	bool flag = 1;
	for (int i = 0; i < size; i++)
	{
		if (pStu[i].getgrade() >= 60)
		{
			pStu[i].outname();
			pStu[i].outgrade();
			flag = 0;
		}
	}
	if (flag)
	{
		cout << "not exist";
	}
}
int  main()
{
    int n;
    cin >> n;
    Student* stu = new Student[n];
    pass(stu,n);
	delete[] stu;
	return 0;
}
