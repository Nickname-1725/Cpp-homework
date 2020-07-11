#include<iostream>
using namespace std;
#include<iomanip>
#define N 10

struct book
{
	char bookID[5];
	char name[20];
	double price;
};

void input(book bs[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		cout <<"书名:" <<bs[i].name <<",书号:"<<bs[i].bookID<<",的价格为:";
		cin >>bs[i].price;

	}
	cout <<"录入成功!"<<'\n';
}

double average(book bs[],int n)
{
	double av=0;int i;

	for (i=0;i<n;i++)
	{
		av += bs[i].price;
	}
	av /= n;

	return av;
}

int findMax(book bs[],int n)//返回价格最高的书的下标
{
	int p=0;int i;
	for(i=1;i<n;i++)
	{
		if(bs[i].price>bs[p].price)
			p=i;
	}

	return p;
}

void print(book bs[],int n)//以表格形式输出书籍信息
{
	int i;
	cout.setf(ios::left);//设置左对齐
	cout.setf(ios::fixed,ios::floatfield);
	cout.precision(2);
	
	cout <<setw(8)<<"书号"		<<setw(16)<<"书名"		<<setw(8)<<"价格"<<'\n';
	for(i=0;i<n;i++)
	{
		cout <<setw(8)<<bs[i].bookID	<<setw(16)<<bs[i].name		<<setw(8)<<bs[i].price<<'\n';
	}

}

void sort(book bs[],int n)  //选择法排序
{
	int i,j,p;book t;
	for(i=0;i<n;i++)
	{
		for(j=i,p=i;j<n;j++)
		{
			if(bs[j].price<bs[p].price)
				p=j;
		}
		if(p!=i)
		{
			t=bs[i];
			bs[i]=bs[p];
			bs[p]=t;
		}
	}

}

int main()
{
	cout <<"#ex0802#图书管理系统\n";

	book books[N]={{"0101","Computer"},{"0102","Programming"},{"0103","Math"},{"0104","English"}};
	int p;

	input(books,4);
	print(books,4);
	
	cout <<"平均价格为："<<average(books,4)<<'\n';
	p=findMax(books,4);
	cout <<"这是价格最高的书"<<'\n'	<<setw(8)<<"书号"		<<setw(16)<<"书名"		<<setw(8)<<"价格"<<'\n'
		<<setw(8)<<books[p].bookID	<<setw(16)<<books[p].name		<<setw(8)<<books[p].price<<'\n';

	sort(books,4);
	
	cout << "降序输出列表:\n";
	print(books,4);
	
	return 0;
}//运行通过