#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout <<"#ex0409#\n";

	double x , t , arcsh , i ;//   tΪͨ��ľ���ֵ����
	//��������i��
	
	cout <<"������һ��0.1��0.7֮���x��������arcsh(x):\n";
	cin >> x ;

	for(i=1,t=x,arcsh=t;fabs(t)>=1e-7;i++)
	{
		t = -1*t*(2*i-1)*(2*i-1)/(2*i)/(2*i+1)*x*x;

		arcsh += t ;

	}
	
	cout << "arcsh(" << x << ")=" << arcsh ;

	return 0 ;
}