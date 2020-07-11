#include<iostream>
using namespace std;
#define N 100

bool isLetter(char a)
{
	if(a<='z'&&a>='a')
		return true;
	else return false;
}

char toUpper(char a)
{
	a += 'A'-'a';
	return a;
}

void firstUpper(char *s)
{
	int i,j;
	for(i=0;*(s+i);i++)
	{
		for(j=0;isLetter(*(s+i+j));j++);
		*(s+i)=toUpper(*(s+i));
		i += j;
	}
	
}


int main()
{
	cout <<"#ex0909#\n";
	char s1[N]={};
	cout <<"请输入一个带标点符号或空格的字符串:\n";

	cin.getline(s1,N-1);

	firstUpper(s1);
	
	cout <<s1;

	return 0;
}//运行通过