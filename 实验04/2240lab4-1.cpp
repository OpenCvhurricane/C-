#include<iostream>

using namespace std ;

int fun(int ) ;

int main()
{
	int n , re , i = 1  ;
	char c  ;
	
	cout << "请入阶次的数字："  ;
	cin >> n ;
	
	while(n < 0) {
		if ( n < 0 ){
			cout << "请重新输入：" ;
			cin >> n ;
		}
		if (n >= 0){
			break ;
		}
	}
	re = fun(n) ;
	
	cout << "结果是：" << re << endl ;
	
	while( i ){
		cout << "是否需要计算另一个数的阶乘(Y表示需要，N表示不需要）：" ;
		cin >> c ;
		switch ( c ){
			case 'Y':
				cout << "请输入阶次的数字：" ;
				cin >> n ;
				while(n < 0) {
					if ( n < 0 ){
					cout << "请重新输入：" ;
					cin >> n ;
				}
				if (n >= 0){
				break ;
			}
			}
				re = fun (n) ;
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

int fun(int n)
{
	int i  , re  = 1 ;
	
	for ( i = 1 ; i <= n ; i++){
		re = re  * i ;
	}
	
	if ( n == 0){
		return 1 ;
	}
	
	return re ;
}
