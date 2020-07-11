#include<iostream>
using namespace std ;

int main()
{
	cout<<"让我解决分钱问题\n";
	double a = 8.0 ,b = 8.0 , c = 8.0 ;

	b = b/2 ;c = c/2 ;a = a+b+c;
	
	a = a/2 ;c = c/2 ;b = a+b+c;
	
	b = b/2 ;a = a/2 ;c = a+b+c;
	

	cout<<"答案是:"<<'\n'<<"甲的钱数"<<c<<'\n'<<"乙的钱数"<<b<<'\n'<<"丙的钱数"<<a<<'\n';
	
	return 0;
}