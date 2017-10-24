#include<iostream>

using std::cout ;
using std::cin ;

int fiblist(int n){

	long c = 0 , a = 0 , b = 1 ;	

	while( (n-1) > 0 ){
		c = a + b ;
		a = b ;
		b = c ;
		n-- ;
	}

	return c ;
}

int main(){

	int n ;
	cin>> n ;
	if( n > 1 )
		cout << fiblist(n) << "\n" ;
	else
		cout << n << "\n" ;
	
}
