#include<iostream>
using namespace std;

inline int max3(int x,int y,int z)
{
	int a = x>y?x:y;
	return a>z?a:z;
}

int main ()
{
	cout <<"#ex0506#���������ı�д\n";

	int a,b,c;

	cout <<"����������������ϵͳ�������ֵ:\n";

	cin >> a >> b >> c ;

	cout <<"max=" <<max3(a,b,c);

	return 0;
}//����ͨ��