#include<iostream>
using namespace std;

class Date
{
private:
	int year,month,day;

	bool leapYear()
	{
		if(year%4==0)
			if(year%100!=0||year%400==0)
				return true;
		return false;
	}

public:

	void setYMD(int y,int m,int d)
	{
		year=y;month=m;day=d;
	}
	
	void getYMD(int &y,int &m,int &d)
	{
		y=year;m=month;d=day;
	}
	void getYMD(int *y,int *m,int *d)
	{
		*y=year;*m=month;*d=day;
	}


	void increaseDay()
	{		
		//			1,3,5,7,8,10,12
		//4,6,9,11
		//2
		
		/////////////����
		if(month==1||month==3||month==5||month==7||
			month==8||month==10||month==12)
		{
			if(day==31)
			{
				month++;day=1;
			}
			else day++;
			if(month==13)
			{month=1;year++;};
		}

		/////////////����
		else if(month==2)
		{
			if(leapYear())
			{
				if(day==29)
				{
					month++;day=1;
				}
				else day++;
			}
			else 
				if(day==28)
				{
					month++;day=1;
				}
				else day++;
		}

		//////////////���������С��
		else
			if(day==30)
			{
				month++;day=1;
			}
			else day++;

	}
};

int main()
{
	cout <<"#ex1002#\n";
	Date dt;int y,m,d;
	
	cout <<"����������:\n";
	cin >>y>>m >>d ;
	dt.setYMD(y,m,d);

	cout <<"����һ����:";
	dt.increaseDay();dt.getYMD(y,m,d);
	cout <<y<<"��"<<m<<"��"<<d<<"��"<<'\n';

	return 0;
}//����ͨ��