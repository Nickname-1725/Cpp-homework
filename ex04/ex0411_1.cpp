#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0411_1#���������\n";

	int m , n , i , j ;

	cout << "������m,n��ϵͳ������m��n�еĳ�����\n";
	cin >> m >> n ;

	for(i = 1; i <= m ; i++ )
	{
		if(i==1||i==m)
		{
			for( j = 1 ; j <= n ;j++)
				cout <<'*';
			cout  <<'\n';
			continue;
		}
		
		for( j = 1 ; j<=n ; j++ )
		{
			if(j==1)
			{
				cout << '*';
				continue;
			}

			if(j==n)
			{
				cout << '*';
				cout <<'\n';
				continue;
			}

			cout <<' ';

		}

		
	}

	return 0;
}