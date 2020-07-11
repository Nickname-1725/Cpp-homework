#include<iostream>
using namespace std;

void exchange(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	cout <<"#ex0901#\n";
	int a,b,c;
	cout <<"输入三整数：\n";

	cin >>a>>b>>c;

	if(a>b)
		exchange(&a,&b);

	if(a>c)
		exchange(&a,&c);

	if(b>c)
		exchange(&b,&c);
	cout <<a<<'\t'<<b<<'\t'<<c;

	return 0;
}//运行通过