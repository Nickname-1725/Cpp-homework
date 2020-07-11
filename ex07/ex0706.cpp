#include<iostream>
using namespace std;

int gcd(int x,int y)                                    //辗转相除法
{
	int sltn,r=x%y;     //默认x为大数，y为小数。即使情况相反，它们也能自动调换顺序。

	while (r!=0)
	{
		x=y;y=r;
		r=x%y;
	}

	return y;
}


int main()
{
	cout <<"#ex0706#集体求最大公约数\n";

	int a[8]={24,	1007,	956,	705,	574,	371,	416,	35};
	int b[8]={60,	631,	772,	201,	262,	763,	1000,	77};
	int c[8];

	int i;

	for (i=0;i<=7;i++)
	{
		c[i]=gcd(a[i],b[i]);

	}

		for (i=0;i<=7;i++)
	{
		cout <<c[i]<<'\t';

	}
	
	return 0;
}//运行通过