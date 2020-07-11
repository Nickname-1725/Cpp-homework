#include<iostream>
using namespace std;

void exchange(int &x,int & y)
{
	int t;
	t=x;
	x=y;
	y=t;
}

int main()
{
	cout <<"#ex0902#";
	int a,b,c;
	cout <<"请输入三整数：\n";

	cin >>a >>b >>c;

	if(a>b)
		exchange(a,b);

	if(a>c)
		exchange(a,c);

	if(b>c)
		exchange(b,c);

	cout <<'\n'<<a<<'\t'<<b<<'\t'<<c<<'\t';

	return 0;
}//运行通过