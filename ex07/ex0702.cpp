#include<iostream>
using namespace std;
#define N 20

void check_nd_ave(int a[],int n,int &neg,int &pos,int &z,double &av_n,double &av_p)  //��������Ϊ������������������������������ƽ��ֵ
{
	int i;            //��������������������������������
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

		if (pos==0);              //������������Ϊ�������£���ƽ��ֵ������Ϊ������0
		else
			av_n = av_n/neg;
		if (neg==0);              //�ڸ���������Ϊ�������£���ƽ��ֵ������Ϊ������0
		else	
			av_p = av_p/pos;

}

int main()
{
	cout <<"#ex0702#�������ͳ��\n";
	
	int a[N]={12,-23,24,-65,5,-78,3,-6,-34,84,20,-4,23,7,-93}; //��������������15����ʣ5��Ϊ��
	int neg,pos,z;
	double av_n,av_p; 

	check_nd_ave(a,N,neg,pos,z,av_n,av_p);

	cout <<"\n��������Ϊ:\n"<<neg;

	cout <<"\n��������Ϊ:\n"<<pos;

	cout <<"\n��ĸ���Ϊ:\n"<<z;

	if (neg==0)
		cout <<"\n��������ƽ��ֵ��";
	else
		cout <<"\n����ƽ��ֵΪ:" <<av_n;

	if (pos==0)
		cout <<"\n����������ƽ��ֵ��";
	else
		cout <<"\n����ƽ��ֵΪ:" <<av_p;

	return 0;
}