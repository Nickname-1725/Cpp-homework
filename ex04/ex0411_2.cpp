#include<iostream>
using namespace std;

int main()
{
	cout <<"#ex0411_2#���Ƴ�����\n���������У��Ի��Ƴ����Σ�\n";

	int m , n , i , j;
	cin >> m >> n ;

	for ( i = 1 ; i <= m ; i++ )
	{

		for ( j = 1 ; j <= n ; j++ )
		{
			if(i== 1||j == 1||i== m||j==n)
			{
				cout <<'*';
				if (j==n)
					cout << '\n' ;
			
			}
			
			else
				cout << ' ';

		}


	}


	return 0;
}