#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0412#Ñ°ÕÒË®ÏÉ»¨Êý\n";

	int i , a , b , c ;

	for ( i = 100 ; i <= 999 ; i++ )
	{
		a = i / 100 ;
		b = i / 10 % 10 ;
		c = i % 10 ;

		if ( i == a*a*a + b*b*b + c*c*c )
			cout << i << '	';
	}


	return 0;
}