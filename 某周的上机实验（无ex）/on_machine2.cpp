#include<iostream>
using namespace std;


const double PI = 3.14159;

int main()
{
	cout<<"Give me a �뾶������Բ������ܳ��������������\n";

	double r;
	cin >> r;
	
	double s = PI * r*r ;//Բ
	double c = 2 * PI * r ;

	double V = 4 * PI * r*r*r / 3 ;
	double S = 4 * PI * r*r ;

	cout << "Բ���" << s << '\n'<<"Բ�ܳ�" << c <<'\n'<< "�����" << V <<'\n'<< "������" << S ;

	return 0;
}