#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class Book{
    public:
        Book();
        void setInfo();
        void show();
    private:
        float price;
        char *shelf_id;
};
Book::Book()
{
    price = 0;
    shelf_id = NULL;
}
void Book::setInfo()
{
	shelf_id = new char[18];
	cin.getline(shelf_id,18);
	cin >> price;
	cin.get();
}
void Book::show()
{
	cout << "Shelf_ID: ";
	cout << setw(18) << setfill(' ') << left << shelf_id;
	cout << "Price: " << price << endl;
}
int  main()
{
    int n;
    cin >> n;
	cin.get();
	Book library[n];
	for(int i = 0; i < n; i++)
	{
		library[i].setInfo();
	}
	for(int i = 0; i < n; i++)
	{
		library[i].show();
	}
	return  0;
}
