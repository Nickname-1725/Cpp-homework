#include<iostream>
using namespace std ;

int main()
{
	cout<<"���ҽ����Ǯ����\n";
	double a = 8.0 ,b = 8.0 , c = 8.0 ;

	b = b/2 ;c = c/2 ;a = a+b+c;
	
	a = a/2 ;c = c/2 ;b = a+b+c;
	
	b = b/2 ;a = a/2 ;c = a+b+c;
	

	cout<<"����:"<<'\n'<<"�׵�Ǯ��"<<c<<'\n'<<"�ҵ�Ǯ��"<<b<<'\n'<<"����Ǯ��"<<a<<'\n';
	
	return 0;
}