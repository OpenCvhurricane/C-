#include<iostream>
#include<cmath>

int fun ( int ) ;
double fun(int , int ) ;

using namespace std ;

int main()
{
	int  n , x , i = 1;
	double re ;
	char c ;
	
	cout << "请输入阶次n以及x："  ;
	cin >> n >>  x ;
	
	while(n < 0) {
		if ( n < 0 ){
			cout << "请重新输入：" ;
			cin >> n ;
		}
		if (n >= 0){
			break ;
		}
	}
	
	re = fun( n , x) ;
	
	cout << "结果是：" << re << endl ;
	
		while( i ){
		cout << "是否需要计算另一个数的阶乘(Y表示需要，N表示不需要）：" ;
		cin >> c ;
		switch ( c ){
			case 'Y':
				cout << "请输入阶次的数字n及阶次x：" ;
				cin >> n >> x;
				while(n < 0) {
					if ( n < 0 ){
					cout << "请重新输入：" ;
					cin >> n ;
				}
				if (n >= 0){
				break ;
			}
			}
				re = fun (n , x) ;
				cout << "结果是：" << re <<  endl ;
				i = 1 ;
				break ;
			case 'N':
				i = 0 ;
				break ;
		}
	}
	
	return 0 ;
}

double fun(int n , int x)
{
	double re = 1 , sum = 1 ,  c = 1 ;
	int i , j ;  
	
	for ( i = 1 ; i <= n ; i++){
		re = fun(i) ;
		for ( j = 1  , c = 1; j <= i ; j++ ){
			c = c * x ;
		}
		sum = sum + 1.0 /(double) re * c ;
	} 
	
	return sum ;
}

int fun(int n)
{
	int i  , re  = 1 ;
	
	for ( i = 1 ; i <= n ; i++){
		re = re  * i ;
	}
	
	return re ;
}
