#include<iostream>
#include<cstring>
using namespace std;
#define N 20


class Student
{
private:
	char Name[N], *Num;
	int Math, English, Physics, Cpp;
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
public:
	Student(char *Name=NULL,char *Num=NULL)
	{
		Math = English = Physics = Cpp =0; 
		if(Name)
		{
			strcpy(this->Name,Name);
		}
		else 
		strcpy(Name,"Undefined");
		if(Num)
		{
			this->Num=new char[strlen(Num)+1];
			strcpy(this->Num,Num);
		}
		
	}
	
	~Student()
	{
		delete []Num;
	}

	Student(Student &s)
	{
		strcpy(Name,s.Name);
		if(s.Num)
		Num=new char[strlen(s.Num)+1];
		strcpy(Num,s.Num);
		Math=s.Math;English=s.English;Physics=s.Physics;Cpp=s.Cpp;
	}
	
	/*(1)*/
	void setNameNo(char *name,char *no)
	{
		strcpy(Name,name);
		if(Num)
		{
			delete Num;
			Num=new char[strlen(no)+1];
			strcpy(Num,no);
		}
		
	}

	/*(2)*/
	void setScores(int m,int e, int p,int c)
	{
		Math=m;English=e;Physics=p;Cpp=c;
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
	cout <<"#ex1005#南航教务管理系统\n";

	Student s1("Yang","181911014"),s2(s1);
	

	s1.outputInfo();
	cout <<'\n';
	s2.outputInfo();


	cout <<"退出界面\n";

	return 0;
}//运行通过