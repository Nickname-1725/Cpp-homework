#include<iostream>
#include<ctype.h>
#include<cstring>
using namespace std;
#define N 100


bool palin(char *s)
{
	char t[N],*head,*tail;strcpy(t,s);

	head=t;tail=t+strlen(t)-1;

	for(;head<=tail;head++,tail--)
	{
		while(isalpha(*head)==0)
		{

			head++;
		}	
		if(*head<='Z')
			(*head) += 'a'-'A';
			
		while(isalpha(*tail)==0)
		{
			tail--;
		}
		

		if(*tail<='Z')
			*tail += 'a'-'A';
		


		if(*head!=*tail)
			return false;
	}
		
	return true;
}

int main()
{
	cout <<"#ex0910_2#��Ȥ�Ļ���\n";

	char s[N]={};

	cout <<"������һ�ַ���:\n";
	cin.getline(s,N-1);

	if(palin(s))
		cout <<"Yes";
	else cout <<"No";

	return 0;
}//����ͨ��