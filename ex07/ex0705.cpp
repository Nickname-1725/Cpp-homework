#include<iostream>                           ////////�������⣡����
using namespace std;
#define N 10

void pai(double a[],int n)                                      //����pai�������򣬽�ʹ��ð�ݷ���
{
	int i,j,p;                                                  //i�����Ѿ��ҵ���Сֵ�ĸ���,pΪ��Сֵ�±�
	double t;                                                   
	for (i=0;i<n-1;i++)                                         
	{
		p=i;                                                    //Ĭ��a[i]Ϊ�±ꡣ
		for (j=i+1;j<n;j++)
			if (a[j]<a[p])                                      //��i+1��n-1Ѱ�Ҹ�С��ֵ����¼���±ꡣ
				p=j;


		if(p!=i)
		{
			t=a[p];a[p]=a[i];a[i]=t;                            //��Сֵǰ�ã����Ѿ�������ǰ��������

		}
	}
}//����ͨ��


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
	cout <<"#ex0705#ѡ�񷨵�ʹ��\n";
	
	double a[N]={12, 23.5 ,-23.54 ,0 ,234,5 ,3.43 ,-23 ,-2.4};

	cout <<"����ǰ��\n";
	show(a,N);

	pai(a,N);

	cout <<"\n�����\n";
	show(a,N);
	return 0;
}//����ͨ��