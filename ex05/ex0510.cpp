#include<iostream>
using namespace std;

void printTriangle_1(int n)
{
	int i,j;

	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i-1;j++)
			cout <<' ';
		for (j=1;j<=n-i+1;j++)
			cout <<'*';
		cout <<'\n';
	}

}

void printTriangle_2(int n)
{
	int i,j;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (i>j)
				cout <<' ';
			else
				cout <<'*';

		}

		cout <<'\n';
	}

}


int main()
{
	cout <<"#ex0510#打印星星三角形\n";

	int n;

	cout <<"你想要打印多大的三角形？";
	cin >> n;

	printTriangle_1(n);
	cout <<"\n\n";
	printTriangle_2(n);

	return 0;
}