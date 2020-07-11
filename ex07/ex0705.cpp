#include<iostream>                           ////////还有问题！！！
using namespace std;
#define N 10

void pai(double a[],int n)                                      //函数pai代表排序，将使用冒泡法。
{
	int i,j,p;                                                  //i计数已经找到最小值的个数,p为最小值下标
	double t;                                                   
	for (i=0;i<n-1;i++)                                         
	{
		p=i;                                                    //默认a[i]为下标。
		for (j=i+1;j<n;j++)
			if (a[j]<a[p])                                      //从i+1至n-1寻找更小的值。记录其下标。
				p=j;


		if(p!=i)
		{
			t=a[p];a[p]=a[i];a[i]=t;                            //最小值前置，若已经处于最前，则跳过

		}
	}
}//运行通过


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
	cout <<"#ex0705#选择法的使用\n";
	
	double a[N]={12, 23.5 ,-23.54 ,0 ,234,5 ,3.43 ,-23 ,-2.4};

	cout <<"排序前：\n";
	show(a,N);

	pai(a,N);

	cout <<"\n排序后：\n";
	show(a,N);
	return 0;
}//运行通过