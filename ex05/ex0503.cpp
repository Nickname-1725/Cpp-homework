#include<iostream>
using namespace std;

int fact(int x)
{
	int fact=1;
	for (;x!=0;x--)
	{
		fact *= x;

	}

	return fact;
}

int com(int m,int r)
{
	int com;

	int m_= fact(m), r_= fact(r) ,m_r = fact(m-r) ;

	//m_Ϊm�Ľ׳�,r_Ϊr�Ľ׳�,m_rΪm-r�Ľ׳ˡ�
	
	com = m_/ r_/m_r ;

	return com;
}

int main()
{
	cout <<"#ex0503#���������\n";

	int c_4_2 = com (4,2);

	int c_6_4 = com (6,4);

	int c_8_7 = com (8,7);

	cout <<"��������\nC(4,2)="<<c_4_2  <<"	;C(6,4)="<<c_6_4  <<"	;C(8,7)="<<c_8_7<<'\n';

	return 0;
}//��������