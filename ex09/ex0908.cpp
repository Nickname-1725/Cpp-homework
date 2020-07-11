#include<iostream>
using namespace std;
#define N 50

void getDigits(char *s1,char *s2)
{
	int i,j=0;
	for(i=0;*(s1+i);i++)
	{
		if(*(s1+i)<='9'&&*(s1+i)>='0')
			*(s2+j++)=*(s1+i);
	}
	*(s2+j)=0;
}

int main()
{
	cout <<"#ex0908#\n";

	char s1[N],s2[N];

	cout <<"请输入带数字的字符串:\n";
	cin >>s1;

	getDigits(s1,s2);

	cout <<s2;
	return 0;
}//运行通过