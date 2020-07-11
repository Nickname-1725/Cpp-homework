#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout <<"#ex0409#\n";

	double x , t , arcsh , i ;//   t为通项的绝对值；。
	//计数变量i。
	
	cout <<"请输入一个0.1至0.7之间的x，将计算arcsh(x):\n";
	cin >> x ;

	for(i=1,t=x,arcsh=t;fabs(t)>=1e-7;i++)
	{
		t = -1*t*(2*i-1)*(2*i-1)/(2*i)/(2*i+1)*x*x;

		arcsh += t ;

	}
	
	cout << "arcsh(" << x << ")=" << arcsh ;

	return 0 ;
}