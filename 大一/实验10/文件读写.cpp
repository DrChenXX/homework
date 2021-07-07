#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream myfile("listin.txt");
	ofstream outfile("listout.txt");
	string temp;
	int n, now, i;
	cin >> n;
	bool flag1,flag2;
	while (getline(myfile,temp))
	{
		for (i = 0; i < temp.length(); i++)
		{
			if (temp[i] == '	')
			{
				temp[i] = ' ';
			}
		}
		now = 0;
		flag1 = 1;
		flag2 = 0;
		for (i = 0; i < temp.length(); i++)
		{
			if (temp[i] == ':')
			{
				break;
			}
			else if (flag1 && temp[i] == ' ')
			{
				continue;
			}
			else if (temp[i] != ' ')
			{
				flag1 = 0;
				flag2 = 1;
				outfile << temp[i];
				now++;
			}
			else if(temp[i] == ' ')
			{
				if (flag2)
				{
					outfile << ' ';
					now++;
				}
				flag2 = 0;
			}
		}
		for (now; now < n - 1; now++)
		{
			outfile << ' ';
		}
		flag1 = 1;
		flag2 = 0;
		for (i; i < temp.length(); i++)
		{
			if (temp[i] == ':')
			{
				outfile << ": ";
				flag1 = 0;
				flag2 = 0;
			}
			else if (flag1 && temp[i] == ' ')
			{
				continue;
			}
			else if (temp[i] != ' ')
			{
				flag1 = 0;
				outfile << temp[i];
				flag2 = 1;
			}
			else if (temp[i] == ' ')
			{
				bool flag3 = 1;
				for (int j = i; j < temp.length(); j++)
				{
					if (temp[j] != ' ')
					{
						flag3 = 0;
						break;
					}
				}
				if (flag3)
				{
					goto ha;
				}
				if (flag2)
				{
					outfile << ' ';
				}
				flag2 = 0;
			}
		}
		ha: ;
		outfile << endl;
	}
	myfile.close();
	outfile.close();
	return 0;
}
