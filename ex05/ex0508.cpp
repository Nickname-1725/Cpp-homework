#include<iostream>
using namespace std;

int fib(int n)
{
	if (n==1||n==2)
		return 1;

	return fib(n-1)+fib(n-2);
}

int main ()
{
	cout <<"#ex0508#斐波那契数列\n";

	int n,i;
	cout <<"输入n,将输出前n项和：";
	cin >>n;

	for (i=1;i<=n;i++)
	{
		cout <<fib(i)<<'\t';


		if (i%5);
		else
			cout <<'\n';
	}

	return 0;
}