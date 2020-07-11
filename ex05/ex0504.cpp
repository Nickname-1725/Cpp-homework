#include<iostream>
using namespace std;

int gcd1(int x,int y)                                    //运用数学定义
{
	int sltn,i;
	for (i=1;i<=x;i++)  //i为可能的最大公约数，但不可能大于其中任何一个数，不妨不大于x。
	{
		if (x%i||y%i);  //逐渐增大i,假如x、y都可被i整除，则i为公约数，循环以找到最大公约数。
		else 
			sltn=i;
	}
	return sltn;
}

int gcd2(int x,int y)                                    //辗转相除法
{
	int sltn,r=x%y;     //默认x为大数，y为小数。即使情况相反，它们也能自动调换顺序。

	while (r!=0)
	{
		x=y;y=r;
		r=x%y;
	}

	return y;
}

int gcd3(int x,int y)                                   //更相减损术
{
	int m,t;
	if(x<y)
	{
		t=x;x=y;y=t;    //确保x不小于y。
	}
	while(x>y)
	{
		m = x-y;        //大数减小数，差值为m
		while(m>y)
		{
			m-=y;       //得数m和减数y之间，大数减小数。
		}
		x=y;y=m;        //最终差的值为最小数，y次之。重新调整顺序再次循环。
	}

	return x;           //无论循环有没有进行，x、y一定相等。
}


int main ()
{
	cout <<"#ex0504#编写最大公约数函数\n";
	int m,n;
	
	cout <<"为了求最大公约数，请输入两个整数:";
	cin >>m>>n;

	cout <<"函数gcd1:"<<gcd1(m,n);

	cout <<"\n函数gcd2:"<<gcd2(m,n);

	cout <<"\n函数gcd3:"<<gcd3(m,n);
	return 0;
}//运行正常