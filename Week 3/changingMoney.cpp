#include<iostream>

using std::cin ;
using std::cout;

int minNoOfCoins(int V){

 int coinsValue = 0 , tempV = V, numOfCoins = 0;
 while( coinsValue < tempV ){
	if( V >= 10 ){
		V = V - 10 ;
		coinsValue += 10 ;
		numOfCoins += 1 ;
	}
	else if( V >= 5 ){
		V = V - 5 ;
		coinsValue += 5 ;
		numOfCoins += 1 ;
	}
	else if( V >= 1 ){
		V = V - 1 ;
		coinsValue += 1 ;
		numOfCoins += 1 ;
	}
 }
    return numOfCoins ;
}

int main(){

	int n ;
	
	cin >> n ;
	cout << minNoOfCoins(n) ;

	return 0 ;
}


