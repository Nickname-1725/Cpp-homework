#include<iostream>
using namespace std;

void delay(int time=1000)  //ȱʡֵΪ1000
{
	int i;
	for (i=1;i<=time;i++);

//	for(;time>0;time--);
}

int main ()
{
	cout <<"#ex0507#ʱ���ӳ�\n";
	char c;
	int t;

	cout <<"������ʱ��,���»س����󣬽�����ʱ��";
	cin >>t;

	delay(t);

	cout <<"\n�ٴΰ��»س������������������ֵ.��Ϊʱ��ֻʹ��ȱʡֵ\n";
	cin >>t;
	delay();

	return 0;
}//�������������ӳټ��̣������Թ۲쵽��