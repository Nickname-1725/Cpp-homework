#include<iostream>
#include<cmath>
using namespace std;

void pr_rev(int x)
{
	int i;

	if (x<10)
	{
		cout <<x;
		return;
	}

	i=x%10;
	cout <<i;
	pr_rev(x/10);
}

int main ()
{
	int x;
	cout <<"#ex0511#\n";

	cout <<"请输入任意位数，将其颠倒输出：";
	cin >>x;

	pr_rev(x);

	return 0;
}