#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "give me a ��λ number:\n��ע��ȷ���������ȷ������λ������õ�����������Ը���";
	cin >> n ;
	

	int a = n % 10;
	int b = n /10 % 10;
	int c = n /100 % 10;
	int d = n /1000 % 10;
	int e = n /10000 ;

	int s = a+b+c+d+e;

	cout<<"n = "<<n<<'\t'<<"s = "<<s;
	return 0;
}