#include<iostream>
using namespace std;

void delay(int time=1000)  //缺省值为1000
{
	int i;
	for (i=1;i<=time;i++);

//	for(;time>0;time--);
}

int main ()
{
	cout <<"#ex0507#时间延迟\n";
	char c;
	int t;

	cout <<"请输入时间,按下回车键后，将会延时：";
	cin >>t;

	delay(t);

	cout <<"\n再次按下回车键，你可以输入任意值.因为时间只使用缺省值\n";
	cin >>t;
	delay();

	return 0;
}//运行正常，但延迟极短，不可以观察到。