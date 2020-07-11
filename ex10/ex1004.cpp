#include<iostream>
#include<cstring>
using namespace std;
#define N 20


class Student
{
private:
	char Name[N], *Num;
	int Math, English, Physics, Cpp;

public:
	~Student()
	{
		delete []Num;
	}

	/*(1)*/
	void setNameNo(char *name,char *no)
	{
		strcpy(Name,name);
		Num=new char[strlen(no)+1];
		strcpy(Num,no);
	}

	/*(2)*/
	void setScores(int m,int e, int p,int c)
	{
		Math=m;English=e;Physics=p;Cpp=c;
	}

	/*(3)*/
	int total()
	{
		int ttl=Math+English+Physics+Cpp;
		return ttl;
	}

	/*(4)*/
	int average()
	{
		int av =total()/4;
		return av;
	}

	/*(5)*/
	void outputInfo()
	{
		cout <<"个人信息:\n" <<"姓名:"<<Name<<'\t'<<"学号:"<<Num<<'\n'
			<<"高数"<<Math<<'\t'	<<"英语"<<English<<'\t'	<<"大物"<<Physics<<'\t'	<<"C++"<<Cpp<<'\n'
			<<"平均:"<<average()<<'\n';
	}
};

int main()
{
	cout <<"#ex1004#南航教务管理系统\n";

	Student s;char num[N],name[N];
	int m,e,p,c;


	cout <<"请分别输入姓名、学号:\n";
	cin >> name >>num;
	s.setNameNo(name,num);


	cout <<"开始录入成绩:\n请分别输入高数、英语、大物、C++分数:\n";
	cin >>m>>e>>p>>c;
	s.setScores(m,e,p,c);

	s.outputInfo();

	cout <<"退出界面\n";

	return 0;
}//运行通过