#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

void sort102(vector<int > &arr){
	
	int lo = 0, mid = 0, hi = arr.size() - 1 ;

	while( mid <= hi ){
		
		if( arr[mid] == 0 ){
			swap(arr[lo], arr[mid]) ;
			lo++ ; 
			mid++ ;
		}
		else if( arr[mid] == 1 ){
			mid++ ;
		}
		else if( arr[mid] == 2 ){
			swap(arr[mid], arr[hi]) ;
			hi-- ;
		}
	}
}

int main(){
	
	vector<int > arr = {1, 0, 2, 1, 1, 1, 0, 0, 2, 2, 2, 1, 0} ;

	sort102(arr) ;

	for(int i = 0 ; i < arr.size() ; i++ ){
		cout << arr[i] << " " ;
	}

	return 0 ;
}
