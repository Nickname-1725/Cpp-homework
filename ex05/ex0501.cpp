#include<iostream>
using namespace std;

bool isprime(int x)
{
	int i; 
	for (i=2;i<=x-1;i++)
	{
		if (x%i==0)
		{
			return false;
		}

	}

	return true;
}

int main ()
{
	cout <<"#ex0501#找素数\n";

	int i ,j=0;

	for (i=100;i<=200;i++)
	{
		if (isprime(i))
		{
			cout << i << '\t';
			j = j+1;
			if (j%8==0)
				cout <<'\n';		
		}



	}

	cout <<"\n经统计，100~200之内的素数有"<< j <<"个\n" ;

	return 0;
}