#include<iostream>

using namespace std ;

long long get_piasano_peroid(long long m){

	int a = 0, b = 1, c = a + b ;

	for(int i = 0 ; i < m*m ; i++ ){
		c = ( a + b ) ;
		a = b ;
		b = c ;
		if( a == 0 && b == 1 ) return i+1 ;
	}
}

long long get_sum_last_fib(long long n, long long m){

	long long reminder = n % get_piasano_peroid(m) ;

	long long sum = 0 ;
	long long first = 0 ;
	long long second = 1 ;
	long long res = reminder ;

	for(int i = 1 ; i < reminder ; i++ ){
		res = ( first + second ) % m ;
		first = second ;
		second = res ;
		sum += res ;
	}

	return sum ;
}

int main(){

	int n ;
	cin >> n ;
}
