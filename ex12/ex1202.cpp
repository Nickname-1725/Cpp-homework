#include<iostream>
#include<cstring>
#define N 80
using namespace std;

void isoa(int n,char *s)
{
	int i,j;char t;
	for(i=0;n!=0;i++)
	{
		*(s+i)=n%10+'0';
		n=n/10;
	}
	for(j=0;j<i/2;j++)
	{
		t=*(s+j);
		*(s+j)=*(s+i-1-j);
		*(s+i-1-j)=t;
	}
}

class Date 
{
private:
	int year, month , day;
public:
	Date(int y=0,int m=0,int d=0)
	{
		year=y;month=m;day=d;
	}
	void setDate(int y,int m,int d)
	{
		year=y;month=m;day=d;
	}
	void getDate(char *date)
	{
		char y[6]={},m[3]={},d[3]={};
		isoa(year,y);isoa(month,m);isoa(day,d);
		/*isoa(int n,char *s)*/
		strcpy(date,y);
		*(date+strlen(date))='/';
		strcat(date,m);          /*0123456789*/
		*(date+strlen(date))='/';           /*2020/05/09*/
		strcat(date,d);
	}

};

class Time 
{
private:
	int hour,minute,second;
public:
	Time(int h=0,int m=0,int s=0)
	{
		hour=h;minute=m;second=s;
	}
	void setTime(int h,int m,int s)
	{
		hour=h;minute=m;second=s;
	}
	void getTime(char *time)
	{
		char h[3]={},m[3]={},s[3]={};         /*01234567*/
		/*isoa(int n,char *s)*/               /*20:02:12*/
		isoa(hour,h);isoa(minute,m);isoa(second,s);
		strcpy(time,h);
		*(time+strlen(time))=':';
		strcat(time,m);
		*(time+strlen(time))=':';
		strcat(time,s);
	}

};

class DateTime:public Date,public Time
{
public:
	DateTime(int y=0,int mon=0,int d=0,int h=0,int min=0,int s=0):Date(y,mon,d),Time(h,min,s){}

	void setDateTime(int y,int mon,int d,int h,int min,int s)
	{
		setDate(y,mon,d);setTime(h,min,s);
	}

	void getDateTime(char *dt)
	{
		char d[10]={},t[10]={};      /*01234567890123456789*/
		getDate(d);getTime(t);      /*2020/05/10  20/22/43*/
		strcpy(dt,d);
		strcat(dt+strlen(dt),"  ");
		strcat(dt,t);
	}

};

int main()
{
	cout <<"#ex1202#数字钟\n";
	DateTime dt(2020,5,9,20,38,45);
	char DTStr[N];
	
	dt.getDateTime(DTStr);
	cout <<DTStr;

	cout <<"\n重置当前时间:\n";
	dt.setDate(212,12,4);dt.setTime(12,2,6);
	dt.getDateTime(DTStr);
	cout <<DTStr<<'\n';
	

	cout <<"再次变更:\n";
	dt.setDateTime(2343,2,24,3,45,5);
	dt.getDateTime(DTStr);
	cout <<DTStr<<'\n';

	return 0;
}//运行通过

