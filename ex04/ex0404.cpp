#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0404#\n";
	cout <<"ÇëÊäÈë¿¼ºËµÈ¼¶£¨A~E£©:\n";

	char c ;
	cin >> c;

	if (c>'E'||c<'A')
	{
		c=c-'a'+'A';
	}
		
	if (c== 'A') 
		cout <<"90~100";
	else if (c=='B') 
		cout <<"80~89";
	else if (c=='C')
		cout <<"70~79";
	else if (c=='D')
		cout <<"60~69";
	else if (c=='E')
		cout <<"0~59";
	else
		cout <<"error";

	return 0;
}