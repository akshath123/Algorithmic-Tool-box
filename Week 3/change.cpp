#include<iostream>

using namespace std ;

int minNumOfCoinsRequired(int n){

	int numOfCoins = 0 ;
	while( n > 0 ){

		if( n >= 10 ){
			n = n - 10 ;
			numOfCoins += 1 ;
		}
		else if( n >= 5 ){
			n = n - 5 ;
			numOfCoins += 1 ;
		}
		else if( n >= 1 ){
			n = n - 1 ;
			numOfCoins += 1;
		}
	}
	return numOfCoins ;
}

int main(){

	int n ;
	cin >> n ;
	cout << minNumOfCoinsRequired(n) ;
}
