#include<iostream>
#include<fstream>
using namespace std;
#define N 10

int main()
{
	cout <<"#ex1404#\n";
	ifstream w1("w1.txt"),w2("w2.txt");
	ofstream w3("w3.txt");
	int i,j;int a[N]={0},b[N]={0};

	for(i=0;w1>>*(a+i);i++)cout;//开始读取w1

	for(j=0;w2>>*(b+j);j++)cout;//开始读取w2

	//for(;i>=0;i--)
	//{
	//	cout <<*(a+i);
	//}

	for(i=0,j=0;;)
	{
		if(*(a+i)==0)       //读完w1或w2
		{	
			for(;*(b+j);j++)
				w3<<*(b+j)<<'\t';
			break;
		}

		else if(*(b+j)==0)
		{	
			for(;*(a+i);i++)
				w3<<*(a+i)<<'\t';
			break;
		}
		else
		{
			if(*(a+i)>*(b+j))
			{
				w3<<*(b+j)<<'\t';
				j++;
			}
			else 
			{
				w3<<*(a+i)<<'\t';
				i++;
			}
		}
		

	}

	w1.close();
	w2.close();
	w3.close();
	return 0;
}//运行通过