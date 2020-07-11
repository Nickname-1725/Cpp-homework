#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0903#\n";

	int a[10],*p=a;
	int i,j;
	cout <<"请为数组给定10个数据！\n";

	for(i=0;i<10;i++)
	{
		cout <<"第"<<i+1<<"个数据：";
		cin >>*(p+i);
	}
	
	cout <<"已经记录！\n";

	for(i=0,j=0;i<10;i++)
	{
		if(*(p+i)<*(p+j))
			j=i;

	}

	cout <<'\n'<<"这是全部的数据：\n";
	for(i=0;i<10;i++)
	{
		cout <<*(p+i)<<'\t';
		if((i+1)%5==0)
			cout <<'\n';
	}

	cout <<'\n'<<"其中，最小值为："<<a[j];

	cout <<'\n';
	return 0;
}//运行通过