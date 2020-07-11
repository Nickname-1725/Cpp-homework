#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0403#\n请输入一个坐标";

	int x,y;

	cin >>x>>y;

	if (x>0)
	{
		if (y>0)
			cout <<1;
		else if (y<0)
			cout <<4;
		else 
			cout <<5;

	}

	else if(x<0)
	{
		if (y>0)
			cout <<2;
		else if (y<0)
			cout <<3;
		else 
			cout <<5;
	}

	else 
		cout <<5;
	
	cout <<"\n";
	return 0;
}