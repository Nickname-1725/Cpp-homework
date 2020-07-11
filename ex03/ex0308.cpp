#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0308#\n";

	int x , y , z ;

	x = y = z = 1 ;

	--x && ++y && ++z ;
	cout <<x<<'\t'  <<y<<'\t'  <<z<<endl;//x=0;y=1;z=1;

	++x && y-- || ++z ;
	cout <<x<<'\t'  <<y<<'\t'  <<z<<endl;//x=1;y=0;z=1;

	return 0 ;
}