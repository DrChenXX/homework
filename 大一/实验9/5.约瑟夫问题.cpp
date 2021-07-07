#include<iostream>
using namespace std;
class person
{
	private:
		int no;
		person *next;
	public:
		person(int num)
		{
			no = num;
			next = NULL;
		}
		void setNext(person *p)
		{
			next = p;
		}
		int getNo()
		{
			return no;
		}
		person *getNext()
		{
			return next;
		}
};
class cycle
{
	private:
		person *start;
		int out;
		int inQueue;
	public:
		cycle(int num, int from, int whoOut)
		{
			inQueue = num;
			out = whoOut;
			person *prv = NULL, *first = NULL;
			for (int i = 1; i <= num; i++)
			{
				person *p = new person(i);
				if (i == 1) first = p;
				if (i == from) start = p;
				if (i > 1) prv->setNext(p); 
				prv = p;
            }
			prv -> setNext(first);
        }
        int getInQueue()
        {
			return inQueue;
        }
        void cnt()
		{
			if (out == 1)
			{
				for (int i = 1; i < inQueue; i++)
				{
					start = start -> getNext();
				}
				start -> setNext(start->getNext()->getNext());
				start = start -> getNext();
				inQueue--;
				return;
			}
			for (int i = 1; i < out - 1; i++)
			{
				start = start -> getNext();
			}
			start -> setNext(start->getNext()->getNext());
			start = start -> getNext();
			inQueue--;
        }
		person *getStart()
        {
			return start;
        }
        
        ~cycle()
        {
			delete start;
        }
};

int  main()
{
    int n, k, m;
	cin >> n >> k >> m;
	cycle *p = new cycle(n,k,m);
	while(p -> getInQueue() > 1) p -> cnt();
	person *winer = p -> getStart();
	cout << winer -> getNo() << endl;
	delete p; 
	return 0;
} 
