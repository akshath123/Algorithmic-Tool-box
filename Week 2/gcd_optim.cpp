#include<iostream>

using std::cin ;
using std::cout ;

int gcd_optim( int a, int b ){
	
	if( b == 0 )
		return a ;
	else
	    gcd_optim(b, a%b) ;
}

int main(){

	int a, b ;
	cin >> a >> b ;
	if( a < b ){
		int temp = b ;	
		b = a ;
		a = temp ;
	}
	cout << gcd_optim(a, b) << "\n" ;

}
