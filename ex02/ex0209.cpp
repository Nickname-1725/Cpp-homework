#include<iostream>
using namespace std;

int main()
{
	char c1 = 250 , c2 = 18 ;
	unsigned char c3 = 250 , c4 = 256 ;
	int x = c1 , y = c3 ;

	cout    << int ( c1 )	<< '\t'	    << int ( c2 ) << '\t' //-6     18
    		<< int ( c3 )	<< '\t'    	<< int ( c4 ) << '\n';//250     0
	
	cout	<<x	      <<'\t'	<<y		<<'\n';               //-6    250

	return 0 ;
}