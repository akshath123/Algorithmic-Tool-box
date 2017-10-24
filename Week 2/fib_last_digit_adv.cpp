#include<iostream>

using std::cin ;
using std::cout ;

int getLastDigit(int n){

	int a = 0, b = 1 ; 
	long long int c = 0, sum = 1 ;
	while( n-1 != 0 ){
		c = ( a + b ) % 10 ;
		sum += c ;
		a = b ;
		b = c ;
		n-- ;
	}

	return (sum%10) ;
}

int main(){

	int n ;
	cin >> n ;
	if( n == 0 )
	   cout << n ;
	else
	   cout << getLastDigit(n) ;
	return 0 ;
}
