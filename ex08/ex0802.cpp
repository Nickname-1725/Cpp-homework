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
		cout <<"����:" <<bs[i].name <<",���:"<<bs[i].bookID<<",�ļ۸�Ϊ:";
		cin >>bs[i].price;

	}
	cout <<"¼��ɹ�!"<<'\n';
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

int findMax(book bs[],int n)//���ؼ۸���ߵ�����±�
{
	int p=0;int i;
	for(i=1;i<n;i++)
	{
		if(bs[i].price>bs[p].price)
			p=i;
	}

	return p;
}

void print(book bs[],int n)//�Ա����ʽ����鼮��Ϣ
{
	int i;
	cout.setf(ios::left);//���������
	cout.setf(ios::fixed,ios::floatfield);
	cout.precision(2);
	
	cout <<setw(8)<<"���"		<<setw(16)<<"����"		<<setw(8)<<"�۸�"<<'\n';
	for(i=0;i<n;i++)
	{
		cout <<setw(8)<<bs[i].bookID	<<setw(16)<<bs[i].name		<<setw(8)<<bs[i].price<<'\n';
	}

}

void sort(book bs[],int n)  //ѡ������
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
	cout <<"#ex0802#ͼ�����ϵͳ\n";

	book books[N]={{"0101","Computer"},{"0102","Programming"},{"0103","Math"},{"0104","English"}};
	int p;

	input(books,4);
	print(books,4);
	
	cout <<"ƽ���۸�Ϊ��"<<average(books,4)<<'\n';
	p=findMax(books,4);
	cout <<"���Ǽ۸���ߵ���"<<'\n'	<<setw(8)<<"���"		<<setw(16)<<"����"		<<setw(8)<<"�۸�"<<'\n'
		<<setw(8)<<books[p].bookID	<<setw(16)<<books[p].name		<<setw(8)<<books[p].price<<'\n';

	sort(books,4);
	
	cout << "��������б�:\n";
	print(books,4);
	
	return 0;
}//����ͨ��