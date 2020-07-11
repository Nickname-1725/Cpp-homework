#include<iostream>
using namespace std;

int main()
{
	int a , b , c , x , y ,z;

	a = 5,b = 8,c = 9;
	cout << "第一题：";
	y = ( a+b , c+a );                                                                           //a=5;b=8;y=14;
	cout  << "a = "<<a  <<";b = "<<b  <<";c = "<<c  /*<<";x = "<<x*/  <<";y = "<<y;

	a = 5,b = 8,c = 9;
	cout << "\n\n第二题：";
	y = (x = a*b, x+x , x*x );                                                                   //a = 5,b = 8,c = 9;x=40;y=1600;
	cout  << "a = "<<a  <<";b = "<<b  /*<<";c = "<<c*/  <<";x = "<<x  <<";y = "<<y;

	a = 5,b = 8,c = 9;
	cout << "\n\n第三题：";
	x = y = a,z = a + b;                                                                         //x=5;y=5;z=13;
	cout  << "a = "<<a  <<";b = "<<b  /*<<";c = "<<c*/  <<";x = "<<x  <<";y = "<<y  <<";z = "<<z;

	a = 5,b = 8,c = 9;
	cout << "\n\n第四题：";
	x = (y = a, z = a+b );                                                                       //x=13;y=5;z=13;
	cout  << "a = "<<a  <<";b = "<<b  /*<<";c = "<<c*/  <<";x = "<<x  <<";y = "<<y  <<";z = "<<z;


	return 0;
}