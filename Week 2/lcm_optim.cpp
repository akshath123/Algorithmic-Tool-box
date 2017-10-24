// lcm(a,b) * gcd(a,b) = a*b 

#include<iostream>

using std::cin ;
using std::cout ;

long long gcd_optim(long long a, long long b){

	if( b == 0 )
		return a ;
	else
		return gcd_optim(b, a%b) ;
}

int main(){

	long long a, b ;
	cin >> a >> b ;
	
	if( a < b ){
		long long temp = a ;
		a = b ;
		b = temp ;
	}
	cout << (a*b / gcd_optim(a, b)) << "\n" ;
	return 0 ;
}
