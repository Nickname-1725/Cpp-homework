#include<iostream>
using namespace std;

int main()
{
	cout << "#ex0410#\n";

	double f , f1 = 0 , f2 = 1 , i , sum = 0 ;


	for(i = 1; i<=20 ; i++ )
	{
	f = f1 +f2 ;
	f1 = f2;
	f2 = f;

	sum += f2/f1 ;

	}

	cout << "result=" << sum ;

	return 0;
}