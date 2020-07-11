#include<iostream>
using namespace std;
#include<cmath>

struct Point
{
	double x;
	double y;
};

Point input()
{
	Point p;
	cout <<"x=";
	cin >>p.x;
	cout <<"y=";
	cin >>p.y;
	
	return p; 
}

void Output(Point p)
{
	cout <<'('	<<p.x	<<','	<<p.y	<<')';
	
}

double Dist(Point p1,Point p2)
{
	double d;
	//d=(p1.x-p2.x,2)*(p1.x-p2.x,2)+(p1.y-p2.y,2)*(p1.y-p2.y,2);
	d=sqrt/*(d);*/((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));

	return d;
}

int main()
{
	cout <<"#ex0801#计算两点间距离\n";
	Point p1,p2;
	double d;
	
	cout <<"请输入第一个点的坐标：\n";
	p1=input();
	
	cout <<"请输入第二个点的坐标：\n";
	p2=input();

	d=Dist(p1,p2);

	cout<<"坐标点";
	Output(p1);
	cout<<"和";
	Output(p2);
	cout<<"之间的距离为";
	cout<<d<<'\n';

	return 0;
}//运行通过