#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0408#PI�Ľ��Ƽ���\n";
	
	double n, i;                   //nΪ��Ŀ����ʽ�е�n��iΪ����������
	double sltn;                //solution,��Ŀ�����ֵ��

	cout << "������n��ֵ��\n";
	cin >> n;

	for( i=1, sltn=2; i<=n; i++)
	{
		
		sltn = sltn * 2 * i * 2 * i / (2*i-1) / (2*i+1);

	}

	cout << sltn ;

	return 0;
}//��������