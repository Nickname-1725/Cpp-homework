#include<iostream>
using namespace std;

int gcd1(int x,int y)                                    //������ѧ����
{
	int sltn,i;
	for (i=1;i<=x;i++)  //iΪ���ܵ����Լ�����������ܴ��������κ�һ����������������x��
	{
		if (x%i||y%i);  //������i,����x��y���ɱ�i��������iΪ��Լ����ѭ�����ҵ����Լ����
		else 
			sltn=i;
	}
	return sltn;
}

int gcd2(int x,int y)                                    //շת�����
{
	int sltn,r=x%y;     //Ĭ��xΪ������yΪС������ʹ����෴������Ҳ���Զ�����˳��

	while (r!=0)
	{
		x=y;y=r;
		r=x%y;
	}

	return y;
}

int gcd3(int x,int y)                                   //���������
{
	int m,t;
	if(x<y)
	{
		t=x;x=y;y=t;    //ȷ��x��С��y��
	}
	while(x>y)
	{
		m = x-y;        //������С������ֵΪm
		while(m>y)
		{
			m-=y;       //����m�ͼ���y֮�䣬������С����
		}
		x=y;y=m;        //���ղ��ֵΪ��С����y��֮�����µ���˳���ٴ�ѭ����
	}

	return x;           //����ѭ����û�н��У�x��yһ����ȡ�
}


int main ()
{
	cout <<"#ex0504#��д���Լ������\n";
	int m,n;
	
	cout <<"Ϊ�������Լ������������������:";
	cin >>m>>n;

	cout <<"����gcd1:"<<gcd1(m,n);

	cout <<"\n����gcd2:"<<gcd2(m,n);

	cout <<"\n����gcd3:"<<gcd3(m,n);
	return 0;
}//��������