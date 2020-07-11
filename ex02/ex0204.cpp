#include<iostream>
using namespace std;

int main()
{
	int a = 3 , b = 4 , c = 5; 

	cout << '\n' << '\n'<< "让我计算第一题！"  ;
	int clsn1 = a + b > c && b ==c ;            //0
	cout<<"结果是"<<clsn1<<'\n';

	cout<<'\n'<<'\n'<<"让我计算第二题！";
	int clsn2 = a || b + c&& b > c;             //1
	cout<<"结果是"<<clsn2<<'\n';


	cout<<'\n'<<'\n'<<"让我计算第三题！";
	int clsn3 = !a || !c || b;                  //1
	cout<<"结果是"<<clsn3<<'\n';


	cout<<'\n'<<'\n'<<"让我计算第四题！";
	int clsn4 = a*b && c + a ;                  //1
	cout<<"结果是"<<clsn4<<'\n';



	return 0;
}