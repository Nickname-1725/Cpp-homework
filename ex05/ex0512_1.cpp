#include<iostream>           //��ʵ����Ŀ��������Դ�ļ���
using namespace std;         //�ֱ���ex0512_1��ex0512_2��

int fact(int);

int main()
{
	cout <<"#ex0512#\n";
	
	int n,i,sum=0;
	cout <<"������һ������";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		sum += fact(i);
	}

	cout <<"sum="<<sum<<'\n';

	return 0;
}//��������