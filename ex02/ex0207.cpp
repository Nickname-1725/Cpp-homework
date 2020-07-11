#include<iostream>
using namespace std;

int main()
{
	int a , b , c , x , y ;



	a = 15 ;    b = 18 ;    c = 21 ;
	cout <<"第一题：";
	x = a<b || c++;   //a=15;b=18;c=21;x=1;
	cout <<"a = "<<a   <<";b = "<<b   <<";c = "<<c   <<";x = "<<x   /*<<";y = "<<y*/;



	a = 15 ;    b = 18 ;    c = 21 ;
	cout <<"\n\n第二题：";
	y = a>b && c++;   //a=15;b=18;c=21;y=0;
	cout <<"a = "<<a   <<";b = "<<b   <<";c = "<<c   /*<<";x = "<<x*/   <<";y = "<<y;



	a = 15 ;    b = 18 ;    c = 21 ;
	cout <<"\n\n第三题：";
	x = a+b>c && c++;  //a=15;b=18;c=22;x=1;
	cout <<"a = "<<a   <<";b = "<<b   <<";c = "<<c   <<";x = "<<x   /*<<";y = "<<y*/;



	a = 15 ;    b = 18 ;    c = 21 ;
	cout <<"\n\n第四题：";
	y = a || b++ || c++;//a=15;b=18;c=21;y=1;
	cout <<"a = "<<a   <<";b = "<<b   <<";c = "<<c   /*<<";x = "<<x*/   <<";y = "<<y;


	return 0;
}

