#include<iostream>
using namespace std;

int main()
{
	cout << "ex0401";
	
	double x,y;                 //�������
	
	while(1)                    //����������
	{
		
		cout <<"\n\n������x��ֵ��\n";
		cin >> x;               //����x��ֵ

		if (x<1)                       //��
		{
			y=x*x;
			cout  <<"\n y��ֵΪ��"<< y;
		}                              //��

		else if (x<10)
		{                   
			y=3*x-2;                   //��
			cout  <<"\n y��ֵΪ��"<< y; 
		}

		else
		{
			y=x*x*x-10*x*x+28;         //��
			cout  <<"\n y��ֵΪ��"<< y;

		}
		
	   
	}
	
	return 0;
}