#include<iostream>
#include<iomanip>
using namespace std;

enum color{RED,GREEN,BLUE};

void print(color c)
{
	switch (c)
	{
		case RED: cout <<setw(10)<<"Red";break;
		case GREEN: cout <<setw(10)<<"Green";break;
		case BLUE: cout <<setw(10)<<"Blue";break;
	}
}

int main()
{
	cout <<"#ex0803#\n";
	color c1,c2,c3;int count=0;
	
	for(c1=RED;c1<=BLUE;c1=color(int(c1)+1) )
	{
		for(c2=RED;c2<=BLUE;c2=color(int(c2)+1))
		{
			if(c1!=c2)
				for(c3=RED;c3<=BLUE;c3=color(int(c3)+1))
				{
					if(c3!=c1&&c3!=c2)
					{
						cout<< ++count;
						print(c1);
						print(c2);
						print(c3);
						cout <<'\n';
					}

				}
		}

	}

	cout <<"共有以上"<<count<<"种排列方式.\n";

	return 0;
}//运行通过