#include<iostream>
#include<vector>
#include<cstdlib>

using std::vector ;
using std::cin ;
using std::cout ;

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

	int n ;
	cin >> n ;
	vector<int> numbers(n) ;

	for(int i = 0 ; i < n ; i++ ){
		cin >> numbers[i] ;
	}

	long long res1 = maxProd1(numbers) ;
	cout << res1 << "\n" ; 
}
