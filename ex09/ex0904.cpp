#include<iostream>
using namespace std;

int fsum(int *arr,int n)    //array显示是蓝色的，我怀疑它是一个保留字，所以改为arr.
{
	int i, s = 0;
	for(i = 0; i<n; i++)
		s += arr[i];
	return (s);
}

int main()
{
	cout <<"#ex0904#";
	int a[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int shead, stail;
	shead = fsum(a, 10);
	stail = fsum(&a[5], 10);

	cout << '\n'<< shead << ',' <<stail << endl;

	return 0;
}