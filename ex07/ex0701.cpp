#include<iostream>
using namespace std;
#define N 20


void fib_fun(int a[],int n)
{
	int i;

	for (i=0;i<=n-1;i++)
	{
		if (i==0||i==1)
		{
			a[i]=1;
			continue;
		}

		a[i]=a[i-1]+a[i-2];

	}

}

int sum_fun(int a[],int n)
{
	int i,s=0;

	for (i=0;i<=n-1;i++)
	{
		s+= a[i];
	}

	return s;
}

int main()
{
	cout <<"#ex0701#쳲��������еļ���\n";

	int fib[20],sum,i,j;

	fib_fun(fib,N);
	sum=sum_fun(fib,N);

	cout <<"�������£�\n";

	for (i=0;i<=19;i++)
	{
		cout <<fib[i] <<'\t';

		if ((i+1)%5==0)
			cout << '\n';

	}

	cout <<"\n����ܺ�Ϊ:\n" <<sum <<'\n';

	return 0;
}//����ͨ��