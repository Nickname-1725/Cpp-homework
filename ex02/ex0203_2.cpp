#include<iostream>
using namespace std;

int main()
{
	int m = 10,n = 8,b;

	b = m++ + ++n;//b=19
	cout <<b<<'\n';

	return 0;
}