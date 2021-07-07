#include <iostream>
using namespace std;
class menu
{
    public:
		menu();
		void setItems(int n);
		void show();
	private:
		int num;
		string *item;
};
menu::menu()
{
    num = 0;
    item = NULL;
}
void menu::setItems(int n)
{
	num = n;
	item = new string[num];
	for (int i = 0; i < n; i++)
	{
		getline(cin,item[i]);
	}
}
void menu::show()
{
	for (int i = 0; i < num; i++)
	{
		cout << item[i] << endl;
	}
}
int main()
{
    menu caidan;
    int n;
    cin >> n;
    cin.get();
    caidan.setItems(n);
    caidan.show();
    return  0;
}
