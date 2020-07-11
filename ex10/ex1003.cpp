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

	/*1*/Date()
	{
		year=2020;month=4;day=24;
	}


	/*2*/Date(int y)
	{
		year=y;month=4;day=24;
	}

	/*3*/Date(int y,int m)
	{
		year=y;month=m;day=24;
	}

	/*4*/Date(int y,int m,int d)
	{
		year=y;month=m;day=d;
	}


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
		
		/////////////大月
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

		/////////////二月
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

		//////////////除二月外的小月
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
	cout <<"#ex1003#\n";
	int y,m,d;
	Date dt1,dt2(2011),dt3(2003,12),dt4(2015,6,23);


	dt1.getYMD(y,m,d);
	cout <<y<<"年"<<m<<"月"<<d<<"日"<<'\n';
	
	dt2.getYMD(y,m,d);
	cout <<y<<"年"<<m<<"月"<<d<<"日"<<'\n';
	
	dt3.getYMD(y,m,d);
	cout <<y<<"年"<<m<<"月"<<d<<"日"<<'\n';

	dt4.getYMD(y,m,d);
	cout <<y<<"年"<<m<<"月"<<d<<"日"<<'\n';

	return 0;
}//运行通过