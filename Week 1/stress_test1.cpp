#include<iostream>
#include<vector>
#include<cstdlib>

using std::vector ;
using std::cin ;
using std::cout ;

long long maxProd(const vector<int> &numbers){
	
	int result = 0 ;
	int n = numbers.size() ;

	for(int i = 0 ; i < n-1 ; i++ )
	 for(int j = i+1 ; j < n ; j++ )
	   if( numbers[i] * numbers[j] > result )
 	      result = numbers[i] * numbers[j] ;

	return (long long) result ;
}

long long maxProd1(const vector<int> &number){

	int n = number.size()  ;
	int max_index1 = -1 ;

	for(int i = 0 ; i < n ; ++i )
	  if( (max_index1 == -1 ) || (number[i] > number[max_index1]) )
	    max_index1 = i ;

	int max_index2 = -1 ;
	for(int i = 0 ; i < n ; ++i )
	  if( (max_index1 != i ) && ( (max_index2 == -1 ) || ( number[i] > number[max_index2] ) ) )
	    max_index2 = i ;

	return ((long long) number[max_index1]) * number[max_index2] ; 
 }

int main(){

	// Stress testing begins here
	while(true){
		
		int n = rand() % 10 + 2 ;
		cout << n << "\n" ;
		vector <int> a ;
		for(int i = 0 ; i < n ; i++ ){
			a.push_back( rand()  % 10000 ) ;
		}

		for(int i = 0 ; i < n ; ++i ){
			cout << a[i] << " " ;
		}

		long long res1 = maxProd(a) ;
		long long res2 = maxProd1(a) ;

		if( res1 != res2 ){
			cout << "Wrong answer:" << res1 << " " << res2 ;
			break ;
		}
		else
			cout << "OK" << "\n" ;
	}

	/*int n ;
	cin >> n ;
	vector<int> numbers(n) ;

	for(int i = 0 ; i < n ; i++ ){
		cin >> numbers[i] ;
	}

	long long res1 = maxProd1(numbers) ;
	cout << res1 << "\n" ; */
}
