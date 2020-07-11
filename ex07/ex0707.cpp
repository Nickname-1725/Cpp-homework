#include<iostream>
using namespace std;

#define N 6

void output(int a[],int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		cout <<a[i] <<'\t';

	}

}

int deleteElement(int a[],int n,int x)
{
	int i,j;

	for(i=0;i<=n-1;i++)
	{
		
		if(a[i]==x)
		{
			for(j=i;j<=n-1;j++)
			{
				
				a[j]=a[j+1];
			}
			
			n--;
			i--;

		}
		
	}


	return n;
}

int main()
{
	cout <<"#ex0707#\n";

	int a[N]={9,5,6,7,8,5};
	int x,n=N;                           //x为将要删除的数，n为数组元素个数

	cout <<"请输入您想删除的数：";

	cin >>x;

	n=deleteElement(a,n,x);

	output(a,n);

	return 0;
}//运行通过