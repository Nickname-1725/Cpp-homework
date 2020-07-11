#include<iostream>
using namespace std ;

int main()
{
	cout <<"#ex0402#\n";

	int x,y,z;

	cout <<"请输入三个整数：\n";

	cin >>x>>y>>z;

	if ( x<y )
	{
		if ( x <z )
		{
			cout <<x<<','; 

			if ( y<z )    
				cout <<y<<','  <<z<<'.';
			else
				cout <<z<<','  <<y<<'.';
		
		}        
			
		else
		{
			cout <<z<<',';

			if( x<y )
				cout <<x<<','  <<y<<'.';
			else
				cout <<y<<','  <<x<<'.';

		}


	}

	else
	{

		if ( y<z )
		{
			cout <<y<<',';
			if ( x<z )
				cout <<x<<','  <<z<<'.';

			else
				cout <<z<<','  <<x<<'.';

		}
		else
		{
			cout <<z<<',';
			if ( x<y )
				cout <<x<<','  <<y<<'.';

			else
				cout <<y<<','  <<x<<'.';
		}
	

	}


	return 0;
}