#include<iostream>
#include<fstream>
using namespace std;

void exchange(int a[][4],int row1,int row2)
{
	int k,t;
	for(k=0;k<4;k++)
	{
		t=a[row1][k];a[row1][k]=a[row2][k];a[row2][k]=t;
	}

}

int main()
{
	cout <<"#ex1405#\n";
	fstream data("data.txt");//////////////////
	int a[4][4],b[4][4];int i,j;

	cout <<"4��4����:\n";
	
	for(i=0;i<16;i++)     //�����¼��
		cin>> a[i/4][i%4];
	
	for(i=0;i<16;i++)//�ļ���д��
	{	
		data<<a[i/4][i%4]<<'\t';
		if(i%4==3)
			data<<'\n';
	}

	data.close();
	data.open("data.txt");
	for(j=0;j<16;j++)
		data>>b[j/4][j%4];//�ļ��Ķ�ȡ


	exchange(b,0,2);

	for(j=0;j<16;j++)//��Ļ�ĳ���
	{
		cout <<b[j/4][j%4]<<'\t';
		if(j%4==3)
		{
			cout <<'\n';
		}
	}

	data.close();
	return 0;
}//����ͨ��