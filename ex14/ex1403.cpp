#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
#define N 200

int main()
{
	cout <<"#ex1403#成绩管理\n";

	ifstream scores("scores.txt");
	ofstream result("result.txt");

	int i,s[N];int *max=s,*min=s;double sum=0,av,a1=0,b1=0,c1=0,d1=0,e1=0,a2,b2,c2,d2,e2;
	for(i=0;scores >> *(s+i);i++)
	{
		if(*max<*(s+i))
			max=s+i;

		if(*min>*(s+i))
			min=s+i;

		sum+=*(s+i);

		if(*(s+i)>=90)
			a1++;
		else if(*(s+i)>=80)
			b1++;
		else if(*(s+i)>=70)
			c1++;
		else if(*(s+i)>=60)
			d1++;
		else e1++;


	}

	av=sum/i;

	a2=100*a1/i;
	b2=100*b1/i;
	c2=100*c1/i;
	d2=100*d1/i;
	e2=100*e1/i;

	result<<"总人数:"<<i<<'\n'
		<<"最高分:"<<*max<<'\n'
		<<"最低分:"<<*min<<'\n'
		<<"平均分:"<<av<<'\n'<<'\n';

	result<<setw(7)<<"90-100:"<<setw(3)<<a1<<", 百分比"<<setw(3)<<int(a2+0.5)<<'%'<<'\n'
		<<setw(7)<<"80-89:"<<setw(3)<<b1<<", 百分比"<<setw(3)<<int(b2+0.5)<<'%'<<'\n'
		<<setw(7)<<"70-79:"<<setw(3)<<c1<<", 百分比"<<setw(3)<<int(c2+0.5)<<'%'<<'\n'
		<<setw(7)<<"60-69:"<<setw(3)<<d1<<", 百分比"<<setw(3)<<int(d2+0.5)<<'%'<<'\n'
		<<setw(7)<<"0-59:"<<setw(3)<<e1<<", 百分比"<<setw(3)<<int(e2+0.5)<<'%'<<'\n';

	scores.close();
	result.close ();
	return 0;
}//运行通过