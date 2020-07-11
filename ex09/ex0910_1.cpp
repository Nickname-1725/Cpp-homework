#include<iostream>
#include<ctype.h>
#include<cstring>
using namespace std;
#define N 100

void filter(char *s)
{
	int i,j;
	for(i=0,j=0;*(s+i);i++)
	{
		if(isalpha(*(s+i)))
		{
			if(*(s+i)>='a')
				*(s+i) += 'A'- 'a';
			*(s+j++)=*(s+i);
		}
	}
	*(s+j)=0;
}

bool palin(char *s)
{
	char t[N],*head,*tail;strcpy(t,s);

	head=t;tail=t+strlen(t)-1;

	filter(t);
	for(;head<tail;head++,tail--)
		if(*head!=*tail)
			return false;
	return true;
}

int main()
{
	cout <<"#ex0910_1#有趣的回文\n";

	char s[N];

	cout <<"请输入一字符串:\n";
	cin.getline(s,N-1);
	filter(s);

	if(palin(s))
		cout <<"Yes";
	else cout <<"No";

	return 0;
}