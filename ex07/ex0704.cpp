#include<iostream>
using namespace std;
#define N 10

void pai(double a[],int n)                                      //����pai�������򣬽�ʹ��ð�ݷ���
{
	int i,j;double t;
	for(j=0;j<=n-2;j++)
	{
		for(i=0;i<=n-2-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}

		}

	}

}

void show (double a[],int n)
{
	int i;
	for (i=0;i<=n-1;i++)
	{
		cout<<a[i]<<'\t';

	}

}

int main ()
{
	cout <<"#ex0704#ð�ݷ���Ӧ��\n";
	
	double a[N]={12, 23.5 ,-23.54 ,0 ,234,5 ,3.43 ,-23 ,-2.4};

	cout <<"����ǰ��\n";
	show(a,N);

	pai(a,N);

	cout <<"\n�����\n";
	show(a,N);
	return 0;
}//����ͨ��