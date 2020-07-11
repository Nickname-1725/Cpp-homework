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
		cout <<"������Ϣ:\n" <<"����:"<<Name<<'\t'<<"ѧ��:"<<Num<<'\n'
			<<"����"<<Math<<'\t'	<<"Ӣ��"<<English<<'\t'	<<"����"<<Physics<<'\t'	<<"C++"<<Cpp<<'\n'
			<<"ƽ��:"<<average()<<'\n';
	}
};

int main()
{
	cout <<"#ex1004#�Ϻ��������ϵͳ\n";

	Student s;char num[N],name[N];
	int m,e,p,c;


	cout <<"��ֱ�����������ѧ��:\n";
	cin >> name >>num;
	s.setNameNo(name,num);


	cout <<"��ʼ¼��ɼ�:\n��ֱ����������Ӣ����C++����:\n";
	cin >>m>>e>>p>>c;
	s.setScores(m,e,p,c);

	s.outputInfo();

	cout <<"�˳�����\n";

	return 0;
}//����ͨ��