#include<iostream>
using namespace std;

int gcd(int x,int y)                                    //շת�����
{
	int sltn,r=x%y;     //Ĭ��xΪ������yΪС������ʹ����෴������Ҳ���Զ�����˳��

	while (r!=0)
	{
		x=y;y=r;
		r=x%y;
	}

	return y;
}


int main()
{
	cout <<"#ex0706#���������Լ��\n";

	int a[8]={24,	1007,	956,	705,	574,	371,	416,	35};
	int b[8]={60,	631,	772,	201,	262,	763,	1000,	77};
	int c[8];

	int i;

	for (i=0;i<=7;i++)
	{
		c[i]=gcd(a[i],b[i]);

	}

		for (i=0;i<=7;i++)
	{
		cout <<c[i]<<'\t';

	}
	
	return 0;
}//����ͨ��