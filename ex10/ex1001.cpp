#include<iostream>
#include<cmath>
using namespace std;

class line
{
private:
	int x1,y1,x2,y2;
	
	void getPoint1(int *a,int *b)
	{
		*a=x1;*b=y1;
	}

	void getPoint2(int &a,int &b)
	{
		a=x2;b=y2;
	}

public:
	void setPoint1()
	{
		cout <<"�����һ���������:\n";
		cin >>x1>>y1;
	}
	void setPoint2()
	{
		cout <<"����ڶ����������:\n";
		cin >>x2>>y2;
	}

	void outputTwoPoint()
	{
		int a,b,*pa=&a,*pb=&b,c,d;
		
		getPoint1(pa,pb);
		getPoint2(c,d);

		cout <<"��������:\n("<<a<<','<<b<<")\n"
			<<'('<<c<<','<<d<<")\n";
	}

	double length()
	{
		double d;
		d=sqrt(double((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
		return d;
	}

};

int main()
{
	cout <<"#ex1001#\n";
	line lin;

	cout <<"��ʼ¼��!\n";
	
	lin.setPoint1();lin.setPoint2();
	lin.outputTwoPoint();

	cout <<"����Ϊ:"<<lin.length()<<'\n';
	return 0;
}//����ͨ��