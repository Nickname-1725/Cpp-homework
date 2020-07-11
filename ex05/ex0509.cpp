#include<iostream>
using namespace std;

double Hermite(int n,double x)
{
	if (n==0)
		return 1;
	if (n==1)
		return 2*x;

	return 2*x*Hermite(n-1,x)-2*(n-1)*Hermite(n-2,x);
}

int main ()
{
	cout <<"#ex0509#\n";
	
	int n,i;double x;
	cout <<"����Ҫ���е�ǰ����ͣ�x��Ϊ���٣�";
	cin >> n >>x;

	for (i=0;i<=n-1;i++)
	{
		cout <<"H("<<i<<','<<x<<")="<<Hermite(i,x)<<'\n';
	}

	return 0;
}//��������