#include<iostream>
using namespace std;

int main()
{
	int a = 3 , b = 4 , c = 5; 

	cout << '\n' << '\n'<< "���Ҽ����һ�⣡"  ;
	int clsn1 = a + b > c && b ==c ;            //0
	cout<<"�����"<<clsn1<<'\n';

	cout<<'\n'<<'\n'<<"���Ҽ���ڶ��⣡";
	int clsn2 = a || b + c&& b > c;             //1
	cout<<"�����"<<clsn2<<'\n';


	cout<<'\n'<<'\n'<<"���Ҽ�������⣡";
	int clsn3 = !a || !c || b;                  //1
	cout<<"�����"<<clsn3<<'\n';


	cout<<'\n'<<'\n'<<"���Ҽ�������⣡";
	int clsn4 = a*b && c + a ;                  //1
	cout<<"�����"<<clsn4<<'\n';



	return 0;
}