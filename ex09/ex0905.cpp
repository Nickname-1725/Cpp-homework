#include<iostream>
using namespace std;
#define N 20

void moveLeft(int *a,int n)
{
	int t=*a,i;
	for(i=0;i<n;i++)
	{
		
		if(i==n-1)
		{
			*(a+n-1)=t;
			continue;
		}
		*(a+i)=*(a+i+1);

	}

}

void rotateLeft(int *a,int n,int k)
{
	for(;k>0;k--)
		moveLeft(a,n);
}

int main()
{
	cout <<"#ex0905#\n";

	int a[N]={21,4,6,78,45,-234,31,345,-5,0,2354,2,21,466,90,568,74,8,3,89};
	int i;int k;

	cout <<"ԭʼ����Ϊ��\n";
	for(i=0;i<20;i++)
	{
		cout <<a[i]<<'\t';
		if((i+1)%5==0)
			cout <<'\n';
	}

	cout <<'\n'<<"������k,��Ҫ�������ƣ�";
	cin >>k;

	rotateLeft(a,N,k);

	cout <<'\n'<<"�������Ϊ��\n";
	for(i=0;i<20;i++)
	{
		cout <<a[i]<<'\t';
		if((i+1)%5==0)
			cout <<'\n';
	}	

	return 0;
}//����ͨ��