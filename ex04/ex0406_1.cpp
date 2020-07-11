#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0406_1#算法1\n";

	int i = 2,sum = 0;

	while (i <=100)
	{
		sum += i;

		i += 2;
	}

	cout <<"结果为："<<sum<<'\n';


	return 0;
}