#include<iostream>
#include<algorithm>
#include<vector>

using std::vector ;
using std::cin ;
using std::cout ;
using std::count ;


int findMajorityCandidate( const vector<int> &b, int size ){

	int majorInd = 0, count = 1 ;

	for(int i = 1 ; i < size ; i++ ){
		if( b[majorInd] == b[i] )
			count++ ;
		else 
			count-- ;
		if( count == 0 ){
			majorInd = i ;
			count = 1 ;
		}
	}
	return b[majorInd] ;
}

bool isMajorityEle( const vector<int> &c, int cand, int size ){

	int freq = count(c.begin(), c.end(), cand) ;
	if( freq > size/2 )
		return true ;

	return false ;
}

int majority( const vector<int> &a, int size ){

	int cand = findMajorityCandidate(a, size) ;

	if( isMajorityEle(a, cand, size) ){
		return 1 ;
	}
	else{
		return 0 ;
	}
}

int main(){

	int n ;
	cin >> n ;
	vector<int> arr(n) ;
	for(size_t i = 0 ; i < n ; i++ )
	cin >> arr[i] ;
	cout << majority(arr, arr.size()) ;
}
