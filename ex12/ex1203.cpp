#include<iostream>
using namespace std;

int isoa(char *s)
{
	int n;int i;

	for(i=0,n=0;*(s+i);i++)
	{
		n*=10;
		if(*(s+i)<='9'&&*(s+i)>='0')
			n+=*(s+i)-'0';
		else 
		{
			n=-1;                //输入的字符不符合要求，返回错误值。
			break;
		}
	}

	return n;
}

int main()
{
	cout <<"#ex1203#\n";

	char s[20];int num;

	cout <<"您将输入一个仅包含数字的字符:";
	cin.getline(s,19);
	
	num=isoa(s);
	cout <<num;
	
	return 0;
}//运行通过