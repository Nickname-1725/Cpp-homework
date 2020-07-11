#include<iostream>
using namespace std;

int main()
{
	int a = 7 , b , c , d;
	float x = 5.2;

	b=5>14|| x<2.5;       //b=0
	cout <<b<<'\n';

	b = !(a<x);           //b=1
	cout <<b<<'\n';

	c = 'a' + 5 ;         //c=102
	cout <<c<<'\n';

	b = x + a%3 + x/2 ;   //b=8
	cout <<b<<'\n';

	d = '\24'+20;         //d=40
	cout <<d<<'\n';
	
	c = a/2*2;            //a=6
	cout <<c<<'\n';

	return 0;
}



