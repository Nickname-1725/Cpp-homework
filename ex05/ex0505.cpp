#include<iostream>
using namespace std;

int fsum(int x,int y)
{return x+y;}

int fsum (int x,int y,int z)
{return x+y+z;}

double fsum(double x,double y)
{return x+y;}

double fsum (double x,double y,double z)
{return x+y+z;}

int main()
{
	cout <<"#ex0505#��д���غ���\n";

	int a,b,c;
	double d,e,f;

	cout <<"�����������������мӷ����㣺";
	cin >> a >>b;
	cout <<'\n'<<a<<'+'<<b<<'='<<fsum(a,b);



	cout <<"\n�����������������мӷ����㣺";
	cin >> a>>b>> c;
	cout <<'\n'<<a<<'+'<<b<<'+'<<c<<'='<<fsum(a,b,c);


	cout <<"\n��������С�������мӷ����㣺";
	cin >> d>> e;
	cout <<'\n'<<d<<'+'<<e<<'='<<fsum(d,e);

	cout <<"\n��������С�������мӷ����㣺";
	cin >> d>> e>> f;
	cout <<'\n'<<d<<'+'<<e<<'+'<<f<<'='<<fsum(d,e,f);
	
	return 0;
}