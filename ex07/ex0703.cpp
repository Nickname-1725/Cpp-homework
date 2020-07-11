#include<iostream>
using namespace std;
#define N 100
#include<cmath>

void input (double a[],int n)
{
	int i;

	for (i=0;i<=n-1;i++)
	{
		cout <<"第" << i+1 <<"个数据为：" ;
		cin >> a[i];
	}
	cout <<"录入成功！\n";
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
	cout <<"#ex0703#均方差的计算\n";

	cout <<"请输入你想存储数据的容量：";
	cin >> n;

	input(a,n);

	av = aver(a,n);

	d = stddev(a,n);

	cout <<"\n该组数据的均方差为：" <<d;
	return 0;
}//运行通过