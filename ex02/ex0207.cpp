#include<iostream>
using namespace std;

int main()
{
	int a , b , c , x , y ;



	a = 15 ;    b = 18 ;    c = 21 ;
	cout <<"��һ�⣺";
	x = a<b || c++;   //a=15;b=18;c=21;x=1;
	cout <<"a = "<<a   <<";b = "<<b   <<";c = "<<c   <<";x = "<<x   /*<<";y = "<<y*/;



	a = 15 ;    b = 18 ;    c = 21 ;
	cout <<"\n\n�ڶ��⣺";
	y = a>b && c++;   //a=15;b=18;c=21;y=0;
	cout <<"a = "<<a   <<";b = "<<b   <<";c = "<<c   /*<<";x = "<<x*/   <<";y = "<<y;



	a = 15 ;    b = 18 ;    c = 21 ;
	cout <<"\n\n�����⣺";
	x = a+b>c && c++;  //a=15;b=18;c=22;x=1;
	cout <<"a = "<<a   <<";b = "<<b   <<";c = "<<c   <<";x = "<<x   /*<<";y = "<<y*/;



	a = 15 ;    b = 18 ;    c = 21 ;
	cout <<"\n\n�����⣺";
	y = a || b++ || c++;//a=15;b=18;c=21;y=1;
	cout <<"a = "<<a   <<";b = "<<b   <<";c = "<<c   /*<<";x = "<<x*/   <<";y = "<<y;


	return 0;
}

