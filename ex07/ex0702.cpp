#include<iostream>
using namespace std;
#define N 20

void check_nd_ave(int a[],int n,int &neg,int &pos,int &z,double &av_n,double &av_p)  //函数功能为：检查正、负、零个数，并求正、负平均值
{
	int i;            //定义计数变量、定义正、负、零个数。
	neg=0,pos=0,z=0;
	av_p=0,av_n=0;
	
	for(i=0;i<=n-1;i++)
	{
		if (a[i]>0)
		{
			pos += 1 ;
			av_p += a[i];
		}
		else if (a[i]<0)
		{
			neg += 1;
			av_n += a[i];
		}
		else
			z += 1;

	}

		if (pos==0);              //在正数个数不为零的情况下，求平均值，否则为错误结果0
		else
			av_n = av_n/neg;
		if (neg==0);              //在负数个数不为零的情况下，求平均值，否则为错误结果0
		else	
			av_p = av_p/pos;

}

int main()
{
	cout <<"#ex0702#正负零的统计\n";
	
	int a[N]={12,-23,24,-65,5,-78,3,-6,-34,84,20,-4,23,7,-93}; //定义了正、负共15个，剩5个为零
	int neg,pos,z;
	double av_n,av_p; 

	check_nd_ave(a,N,neg,pos,z,av_n,av_p);

	cout <<"\n负数个数为:\n"<<neg;

	cout <<"\n正数个数为:\n"<<pos;

	cout <<"\n零的个数为:\n"<<z;

	if (neg==0)
		cout <<"\n不能求负数平均值！";
	else
		cout <<"\n负数平均值为:" <<av_n;

	if (pos==0)
		cout <<"\n不能求正数平均值！";
	else
		cout <<"\n正数平均值为:" <<av_p;

	return 0;
}