#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0903#\n";

	int a[10],*p=a;
	int i,j;
	cout <<"��Ϊ�������10�����ݣ�\n";

	for(i=0;i<10;i++)
	{
		cout <<"��"<<i+1<<"�����ݣ�";
		cin >>*(p+i);
	}
	
	cout <<"�Ѿ���¼��\n";

	for(i=0,j=0;i<10;i++)
	{
		if(*(p+i)<*(p+j))
			j=i;

	}

	cout <<'\n'<<"����ȫ�������ݣ�\n";
	for(i=0;i<10;i++)
	{
		cout <<*(p+i)<<'\t';
		if((i+1)%5==0)
			cout <<'\n';
	}

	cout <<'\n'<<"���У���СֵΪ��"<<a[j];

	cout <<'\n';
	return 0;
}//����ͨ��