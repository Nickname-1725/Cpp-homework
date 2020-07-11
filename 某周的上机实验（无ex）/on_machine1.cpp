#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "give me a 五位 number:\n请注意确保你输入的确的是五位！否则得到错误结果后果自负！";
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