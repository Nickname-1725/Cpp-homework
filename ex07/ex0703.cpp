#include<iostream>
using namespace std;
#define N 100
#include<cmath>

void input (double a[],int n)
{
	int i;

	for (i=0;i<=n-1;i++)
	{
		cout <<"��" << i+1 <<"������Ϊ��" ;
		cin >> a[i];
	}
	cout <<"¼��ɹ���\n";
}

double aver(double a[],int n)
{
	int i=0;double av=0;
	for (i=0;i<=n-1;i++)
	{
		av += a[i];
	}

	av = av / n;
	return av;
}

double stddev(double a[],int n)
{
	int i;
	double d=0,av = aver(a,n);

	for(i=0;i<=n-1;i++)
	{
		d += pow(a[i]-av,2);

	}

	d /= n; d = sqrt(d);
	return d;
}

int main ()
{
	double a[N],av,d;
	int n;
	cout <<"#ex0703#������ļ���\n";

	cout <<"����������洢���ݵ�������";
	cin >> n;

	input(a,n);

	av = aver(a,n);

	d = stddev(a,n);

	cout <<"\n�������ݵľ�����Ϊ��" <<d;
	return 0;
}//����ͨ��