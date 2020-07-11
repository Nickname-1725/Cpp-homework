#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0306#\n";

	int a ;
	a = 7*2 - 3%5 -4/3;                    //a = 10;

	float b ;
	b = 510 + 3.2e3 - 5.6/0.03;             //b = 3523.333
	cout <<a<<'\t'  <<b<<endl;

	int m = 3, n = 4;
	a = m++ - --n;                          //a = 0;
	cout <<a<<'\t'  <<m<<'\t'  <<n<<endl  ; //m = 4 ; n = 3;


	return 0;
}