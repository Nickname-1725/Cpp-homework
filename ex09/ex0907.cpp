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
	
	cout <<"������һ���ַ���\n";
	cin >>a;

	cout <<"�ַ�������Ϊ��";
	len=my_strlen(a);
	cout <<len;

	return 0;
}//����ͨ��