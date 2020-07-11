#include<iostream>
using namespace std;


class Time
{
private:
	int hour,minute,second;
	static int baseHour,baseMinute,baseSecond;
	static int timeToSecond(Time t)
	{
		int s;s=3600*t.hour+60*t.minute+t.second;
		return s;
	}

public:
	Time(int h=0,int m=0,int s=0)
	{
		hour =h;minute=m;second=s;
	}
	static int timeBaseDifference(Time t)
	{
		int d;
		d=3600*(t.hour-t.baseHour)+60*(t.minute-t.baseMinute)+(t.second-t.baseSecond);

		return d;
	}
	void show()
	{
		cout <<hour	<<':'	<<minute	<<':'<<second;
	}
	friend int difference(Time t1,Time t2);

};

int Time::baseHour=1;
int Time::baseMinute=10;
int Time::baseSecond=10;

int difference(Time t1,Time t2)
{
	int d;d= Time::timeToSecond(t1)-Time::timeToSecond(t2);
	return d;
}

int main()
{
	cout <<"#ex1101#\n";

	Time t1(1,11,2),t2(1,12,50);

	t1.show();cout <<'\n';
	t2.show();cout <<'\n';

	cout <<t1.timeBaseDifference(t1)<<'\n';
	cout <<t2.timeBaseDifference(t2)<<'\n';

	cout <<difference(t1,t2);

	return 0;
}//运行通过