#include<iostream>

using std::cin ;
using std::cout ;

int fib_last(int n){

	int c = n , a = 0 , b = 1 ;

	while( (n-1) > 0 ){
		c = (a + b) % 10 ;
		a = b ;
		b = c ;
		n-- ;
	}

	return c ;
}

int main(){

	int n ;

	cin >> n ;
	if( n > 1 )
		cout << fib_last(n) << "\n" ;
	else
		cout << 0 ;

	return 0 ;
}
