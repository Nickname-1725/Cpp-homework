#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0412_2#Ñ°ÕÒË®ÏÉ»¨Êý\n";
	
	int i , a , b , c ;

	for (a=1;a<=9;a++)
	{

		for (b=0;b<=9;b++)
		{

			for (c=0;c<=9;c++)
			{
				i = a*a*a + b*b*b + c*c*c;

				if (i == a*100 + b*10 + c)
					cout << i << '	' ;
			}

		}

	}




	return 0;
}