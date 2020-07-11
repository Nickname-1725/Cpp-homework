#include<iostream>
using namespace std;


const double PI = 3.14159;

int main()
{
	cout<<"Give me a 半径，我求圆面积、周长，球表面积、体积\n";

	double r;
	cin >> r;
	
	double s = PI * r*r ;//圆
	double c = 2 * PI * r ;

	double V = 4 * PI * r*r*r / 3 ;
	double S = 4 * PI * r*r ;

	cout << "圆面积" << s << '\n'<<"圆周长" << c <<'\n'<< "球体积" << V <<'\n'<< "球表面积" << S ;

	return 0;
}