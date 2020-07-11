#include<iostream>
using namespace std;

int main()
{
	cout << "ex0401";
	
	double x,y;                 //定义变量
	
	while(1)                    //程序多次运行
	{
		
		cout <<"\n\n请输入x的值：\n";
		cin >> x;               //输入x的值

		if (x<1)                       //分
		{
			y=x*x;
			cout  <<"\n y的值为："<< y;
		}                              //段

		else if (x<10)
		{                   
			y=3*x-2;                   //函
			cout  <<"\n y的值为："<< y; 
		}

		else
		{
			y=x*x*x-10*x*x+28;         //数
			cout  <<"\n y的值为："<< y;

		}
		
	   
	}
	
	return 0;
}