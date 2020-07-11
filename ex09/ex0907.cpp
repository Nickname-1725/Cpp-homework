#include<iostream>
using namespace std;
#define N 50
int my_strlen(char *s)
{
	int i;
	for(i=0;*(s+i);i++);
	return i;
}



int main()
{
	cout <<"#ex0907#\n";
	char a[N];int len;
	
	cout <<"请输入一个字符串\n";
	cin >>a;

	cout <<"字符串长度为：";
	len=my_strlen(a);
	cout <<len;

	return 0;
}//运行通过