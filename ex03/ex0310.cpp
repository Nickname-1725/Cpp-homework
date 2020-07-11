#include<iostream>
#include<cmath>                               //调用头文件<cmath>
using namespace std ;

int main()
{
	cout <<"#ex0310#解二次方程式\n";

	double a , b , c , disc , x1 , x2 , p , q ;

	cout << "请输入二次方程系数a,b,c\n";
	cin  >>a  >>b  >>c ;

	disc = b*b - 4*a*c ;
	p = -b / (2*a) ;
	q = sqrt(disc)/(2*a);

	x1 = p + q;
	x2 = p - q;
	cout <<" x1 = "<<x1<<'\n';
	cout <<" x2 = "<<x2<<'\n';

	return 0 ;
}