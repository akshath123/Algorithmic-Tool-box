#include<iostream>

using namespace std ;

long long get_piasano_number(long long m){
	long long a = 0, b = 1 , c = a + b ;
	for(int i = 0 ; i < m*m ; i++ ){
		c = ( a + b ) % m ;
		a = b ;
		b = c ;
		if( a == 0 && b == 1 ){
		   return i+1 ;
		}	
	}
}

long long huge_fib_modlo_m(long long n, long long m){

	long long reminder = n % get_piasano_number(m) ;

	int first = 0 ; 
	int last = 1 ;

	long long res = reminder ;

	for(int i = 1 ; i < reminder ; i++ ){
		res = (first + last) % m ;
		first = last ;
		last = res ;
	}

	return res % m ;
}

int main(){

	long long n, m ;
	cin >> n >> m ;

	cout << huge_fib_modlo_m(n, m) ;

	return 0 ;	
}
