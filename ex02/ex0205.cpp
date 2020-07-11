#include<iostream>
using namespace std;


int main()
{
	int a = 6,b = 7,c,d;
	
	cout << "第一题"<<'\n';
	a*=a*=b;
	cout <<"a = "<<a<<";b = "<<b;              //a=1764;b=7;

	a = 6; b = 7;
	cout <<'\n'<<'\n'<<"第二题"<<'\n';
	c = b/=a;
	cout <<"a = "<<a<<";b = "<<b<<";c = "<< c ;//a=6;b=1;c=1;

	a = 6; b = 7;
	cout <<'\n'<<'\n'<<"第三题"<<'\n';
	a+=b-=a;
	cout <<"a = "<<a<<";b = "<<b ;             //a=7;b=1;


	a = 6; b = 7;
	cout <<'\n'<<'\n'<<"第四题"<<'\n';
	a+=b+=a*=b;                                //a=91;b=49;
	cout <<"a = "<<a<<";b = "<<b;


	a = 6; b = 7;
	cout <<'\n'<<'\n'<<"第五题"<<'\n';
	c=a+=b+=a;                                 //a=19;b=13;c=19
	cout <<"a = "<<a<<";b = "<<b <<";c="<<c;

	a = 6; b = 7;
	cout <<'\n'<<'\n'<<"第六题"<<'\n';
	d = (c=a/b+15);                            //a=6;b=7;c=15;d=15
	cout <<"a = "<<a<<";b = "<<b<<";c = "<< c<<";d = "<<d ;



	return 0;
}