#include<iostream>
using namespace std;

int main()
{
	float x , y ; int a , b ;
	
	cout <<"运算 (1) x = a = 7.873 ;\n";
	x = a = 7.873 ;                                                                         //x=7;a=7;
	cout    <<"x = "<<x   /*<<";  y = "<<y*/   <<";  a = "<<a   /*<<";  b = "<<b*/;


	cout <<"\n\n运算 (2) a = x = 7.873;\n ";
	a = x = 7.873 ;                                                                         //x=7.873;a=7;
	cout    <<"x = "<<x   /*<<";  y = "<<y*/   <<";  a = "<<a   /*<<";  b = "<<b*/;


	cout <<"\n\n运算 (3) x = a = y = 7.873;\n";
	x = a = y = 7.873 ;                                                                     //x=7;a=7;y=7.873;
	cout    <<"x = "<<x   <<";  y = "<<y   <<";  a = "<<a   /*<<";  b = "<<b*/;


	cout <<"\n\n运算 (4) b = x = ( a = 25 , 15 / 2 );\n";
	b = x = ( a = 25 , 15 / 2 );                                                            //x=7;a=25;b=7;
	cout    <<"x = "<<x   /*<<";  y = "<<y*/  <<";  a = "<<a   <<";  b = "<<b;


	return 0 ;
}