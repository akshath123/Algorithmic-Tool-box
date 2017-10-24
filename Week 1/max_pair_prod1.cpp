#include<iostream>
#include<vector>

using std::vector ;
using std::cin ;
using std::cout ;

long long maxprod(const vector<int> &num){

	long long result = 0 ;
	int n = num.size() ;
	
	for(int i = 0 ; i < n-1 ; i++ )
	  for(int j = i+1 ; j < n ; j++ )
	     if( num[i] * num[j] > result )
 		result = num[i] * num[j] ;

	return result ;
}

// Imporovement made 
long long maxprod1(const vector<int> &number){

	int max1ind = -1 ;	
	int n = number.size() ;	
	for(int i = 0 ; i < n ; ++i ){
	  if( (max1ind == -1) || (number[i] > number[max1ind]) )	
		max1ind = i ;
	}
	
	int max2ind = -1 ;
	for(int i = 0 ; i < n ; ++i ){
	  if( (number[max1ind] != number[i]) && (( max2ind == -1) || ( number[i] > number[max2ind] )) )
		max2ind = i ;
	}

	return ((long long)(number[max1ind])) * number[max2ind] ;
}

int main(){

	int n ;
	cin>>n ;
	vector<int> num(n) ;

	for(int i = 0 ; i < n ; i++ ){
		cin>> num[i] ;
	}

	long long result = maxprod1(num) ;
	cout<< result << "\n" ;
	return 0 ;
}
