#include<iostream>
using namespace std ;

int main ()
{
	cout <<"#ex0407#\n";
	int i=1;
	double t=1,e=0;

	while (t>=1e-7)
	{
		e += t;
		t = t/i;
		i++;

	}

	cout <<"eµÄÖµÎª£º"<<e;

	return 0;
}