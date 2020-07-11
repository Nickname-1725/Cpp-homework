#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0405#\n";
	cout <<"ÇëÊäÈë¿¼ºËµÈ¼¶£¨A~E£©:\n";

	char c ;
	cin >> c;

	if (c>'E'||c<'A')
	{
		c=c-'a'+'A';
	}
		
	switch(c)
	{
	case 'A' :cout <<"90~100";break;
	case 'B' :cout <<"80~89";break;
	case 'C' :cout <<"70~79";break;
	case 'D' :cout <<"60~69";break;
	case 'E' :cout <<"0~59";break;
	default  :cout <<"error";	
	}


	return 0;
}