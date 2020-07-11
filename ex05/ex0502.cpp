#include<iostream>
using namespace std;

int fact(int x)
{
	int fact=1;
	for (;x!=0;x--)
	{
		fact *= x;

	}

	return fact;
}

int main ()
{
	cout <<"#ex0502#\n";

	int i,n,sum=0;

	cout <<"请输入n:";

	cin >> n;

	for (i=1;i<=n;i++)
	{
		sum += fact(i);

	}

	cout <<"阶乘之积为："<<sum;
	return 0;
}