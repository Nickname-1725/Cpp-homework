#include<iostream>           //本实验项目包含两个源文件，
using namespace std;         //分别是ex0512_1、ex0512_2。

int fact(int);

int main()
{
	cout <<"#ex0512#\n";
	
	int n,i,sum=0;
	cout <<"请输入一整数：";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		sum += fact(i);
	}

	cout <<"sum="<<sum<<'\n';

	return 0;
}//运行正常