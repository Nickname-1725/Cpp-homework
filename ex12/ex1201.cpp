#include<iostream>
using namespace std;
#define PI 3.14


class Point
{
private:
	
public:
	Point(int x=0,int y=0)
	{
		this->x=x;this->y=y;
	}
	Point(const Point &p)
	{
		this->x=p.x;this->y=p.y;
	}

	void setPoint(int x,int y)
	{
		this->x=x;this->y=y;
	}
	void getPoint(int *px,int *py)
	{
		*px=x;*py=y;
	}
	void show()
	{
		cout <<'('<<x <<','<<y <<')';
	}

protected:
	int x,y;
};

class Circle:public Point
{
public:
	Circle(int x=0,int y=0,int r=0):Point(x,y)
	{
		radius =r;
	}

	Circle(const Circle &c):Point(c.x,c.y)
	{
		radius=c.radius;
	}

	void setRadius(int r)
	{
		radius =r;
	}

	void getRadius(int &r)
	{
		r=radius;
	}

	double area()
	{
		double s;s=PI*radius*radius;
		return s;
	}

	void show()
	{
		cout <<"坐标:"	<<'('	<<x	<<','	<<y	<<')'	<<'\t'	<<"半径:"	<<radius	<<'\t'	<<"面积:"	<<area();
	}

protected:
	int radius;
};

class Cylinder:public Circle
{
protected:
	int height;

public:
	Cylinder(int x=0,int y=0,int r=0,int h=0)
	{
		this->x=x;this->y=y;radius=r;height=h;
	}
	Cylinder(const Cylinder & c):Circle(c.x,c.y,c.radius)
	{
		height=c.height;
	}
	void seHeight(int h)
	{
		height=h;
	}
	void getHeight(int *h)
	{
		*h=height;
	}
	double volume()
	{
		double v;v=area()*height;
		return v;
	}
	void show()
	{
		cout <<"圆心坐标:" <<'(' <<x <<',' <<y <<')' <<'\t' <<"半径:" <<radius <<'\t' <<"高度:" <<height <<'\t' <<"体积:" <<volume();
	}
};

int main()
{
	cout <<"#ex1201#\n";

	Cylinder cy1,cy2(1,1,1,1),cy3(cy2);
	cout <<"底面圆心坐标:\n";
	cy3.Point::show();
	cout <<"\n圆柱体底面信息:\n";
	cy3.Circle::show();
	cout <<"\n圆柱体信息:\n";
	cy3.show();
	
	cy3.setPoint(2,2);cy3.setRadius(2);cy3.seHeight(2);

	cout <<"\n变更后:\n";
	cy3.show();
	cout <<'\n';system("pause");
	return 0;
	
}//运行通过
