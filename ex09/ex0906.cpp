#include<iostream>
#include<cstring>
using namespace std;

#define N 30

void input(char a[])
{
	cout <<"\n录入开始======>\n";
	cin >> a;
	cout <<"======>录入成功!!!\n\n";
}

void swap(char *a,char *b)
{
	char t[N];
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
}

void sortd(char a[],char b[],char c[])
{
	if(strcmp(a,b)>0)
		swap(a,b);
	if(strcmp(a,c)>0)
		swap(a,c);
	if(strcmp(b,c)>0)
		swap(b,c);
}

int main()
{
	cout <<"#ex0906#\n";
	char str1[N]={},str2[N]={},str3[N]={},
		*p1=str1,*p2=str2,*p3=str3;

	cout <<"请输入三个单词：\n";
	input(str1);input(str2);input(str3);

	sortd(str1,str2,str3);

	cout <<str1<<'\n'<<str2<<'\n'<<str3<<'\n';

	return 0;
}//运行通过