#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
	cout <<"#ex1402��ӡƽ�����������ձ�#\n";
	ofstream table("table.txt");

	int i;

	//���������ʽ

	table.setf (ios::fixed,ios::floatfield);
	table.precision(3);
	
	table <<setw(6)<<"Number"<<setw(8)<<"Square"<<setw(16)<<"Square root"<<'\n'<<"----------------------------------------"<<'\n';

	for(i=1;i<=100;i++)
	{
		table <<setw(6)<<i<<setw(8)<<i*i<<setw(16)<<sqrt(1.0*i)<<'\n';
	}

	table.close();
	return 0;
}//����ͨ��