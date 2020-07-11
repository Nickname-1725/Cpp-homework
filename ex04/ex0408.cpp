#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0408#PI的近似计算\n";
	
	double n, i;                   //n为题目中数式中的n，i为计数变量。
	double sltn;                //solution,题目所求的值。

	cout << "请输入n的值：\n";
	cin >> n;

	for( i=1, sltn=2; i<=n; i++)
	{
		
		sltn = sltn * 2 * i * 2 * i / (2*i-1) / (2*i+1);

	}

	cout << sltn ;

	return 0;
}//运行正常