#include<iostream>
using namespace std;

inline int max3(int x,int y,int z)
{
	int a = x>y?x:y;
	return a>z?a:z;
}

int main ()
{
	cout <<"#ex0506#内联函数的编写\n";

	int a,b,c;

	cout <<"请输入三个整数，系统将求最大值:\n";

	cin >> a >> b >> c ;

	cout <<"max=" <<max3(a,b,c);

	return 0;
}//运行通过