#include<iostream>
#include<cmath>                               //����ͷ�ļ�<cmath>
using namespace std ;

int main()
{
	cout <<"#ex0310#����η���ʽ\n";

	double a , b , c , disc , x1 , x2 , p , q ;

	cout << "��������η���ϵ��a,b,c\n";
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