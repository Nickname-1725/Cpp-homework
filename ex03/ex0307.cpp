#include<iostream>
using namespace std ;

int main()
{
	cout <<"#ex0307#\n";

	char x = 'm' , y = 'n' ;
	int n ;

	n = x < y ;
	cout  <<n<<endl;             //n = 1;
	
	n = x == y-1 ;
	cout <<n<<endl;              //n = 1;

	n = ('y'!='y')+(5>3)+(y-x==1);
	cout <<n<<endl;              //n = 2;

	return 0 ;
}