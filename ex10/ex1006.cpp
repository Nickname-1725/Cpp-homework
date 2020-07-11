#include<iostream>
using namespace std;

class ListClass
{
private:
	char *ListPtr;
	int nLen;
	char nElem;
public:
	ListClass(int n=10)
	{
		nElem=0;
		nLen= n;
		if(n)
		{
			ListPtr = new char[n];
		}
		else
			ListPtr = 0;
	}
	
	~ListClass(void)
	{
		delete[nLen] ListPtr;
	}

	
	/*1*/
	char Elem(char elem)
	{
		if(nElem == nLen)
		{
			char *newptr;
			newptr = new char [nLen + 10];
			for(int i = 0; i<nElem;i++)
				newptr[i] = ListPtr[i];
			delete [nLen]ListPtr;
			nLen += 10;
			ListPtr = newptr;
		}
		ListPtr[nElem++] = elem;
		return (nElem);
	}
	/*2*/
	char &Elem(unsigned n)
	{
		return ListPtr[n];
	}
	/*3*/
	int Elem(void)
	{
		return nElem;
	}

	int Len(void)
	{
		return nLen;
	}
	
	char GetElem(int i)
	{
		if ((i >= 0) && (i<nElem))
			return ListPtr[i];
		else
		{
			cout <<"下标越界\n";
			return -1;
		}
	}
	void Print(void)
	{
		for (int i=0; i<nElem;i++)
			cout << ListPtr[i] <<'\t';
		cout <<'\n';
	}
};

int main()
{
	cout <<"#ex1006#\n";

	ListClass list;
	for (int i = 0;i<5; i++)
	{
		char j;
		cin >>j;
		list.Elem(j);
	}

	cout <<"线性表的长度为:"<<list.Len() <<endl;
	
	cout <<"线性表的元素个数为:"<<list.Elem()<<endl;
	
	cout <<"线性表的元素为:";
	list.Print();
	
	list.Elem(3u) = 's';
	cout <<"线性表下标为3的元素为:"<<list.Elem(3u) <<endl;
	


	list.Elem('c');
	list.Elem('g');

	cout <<"现在线性表的长度为:"<<list.Len() <<endl;

	cout <<"现在线性表的元素个数为:"<<list.Elem()<<endl;

	cout <<"线性表的元素为:";
	list.Print();

	cout <<"线性表最后一个元素为:"<<list.GetElem(list.Elem()-1)<<endl;

	return 0;
}//运行通过