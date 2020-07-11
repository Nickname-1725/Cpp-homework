#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0309\n#";
	
	int x = 1 ,y = 3 , z = 5 ;

	x += y *= z -= 2 ;
	cout <<x<<'\t'  <<y<<'\t'  <<z<<endl;//x = 10 ;y = 9 ;z = 3;
	
	x *= y /= z -= x ;	
	cout <<x<<'\t'  <<y<<'\t'  <<z<<endl;//x = -10 ;y = -1 ;z = -7;

	x = y = z = 2 ;
	z = (x *= 2 ) + ( y += 4 ) + 2 ;
	cout <<z<<endl;                      //z = 12;
	cout <<x<<'\t'  <<y<<'\t'  <<z<<endl;//x = 4; y = 6; z = 12;

	return 0 ;
}