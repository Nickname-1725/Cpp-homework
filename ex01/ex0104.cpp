#include<iostream>
using namespace std;

int max(int x ,int y)
{
	int z;

	if(x>y) z=x;
	else z=y;

	return z;
}



int main()
{
	int a , b , c ;
	int max( int, int );//在调用这个函数前，应该加以说明。“我要用它”

	cout<<"请输入两个整数：\n";
	cin>>a>>b;
	c = max(a,b);
	cout<<"max"<<c<<'\n';


	return 0;
}

