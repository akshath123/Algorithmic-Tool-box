#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

void partition(vector <int> &arr, int high, int low, int &i, int &j){

	try{
	if( (high-low) <= 1 ){
		if( arr[high] < arr[low] )
			swap(arr[high], arr[low]) ;
		i = low ;
		j = high ;
		return ;
	}

	int mid = low ;
	int pivot = arr[high] ;

	while( mid <= high ){

		if( arr[mid] < pivot )
			swap( arr[mid++], arr[low++]) ;
		else if( arr[mid] == pivot )
			mid++ ;
		else if( arr[mid] > pivot )
			swap(arr[mid], arr[high--]) ;
			
	}

	i = low-1 ;
	j = mid ;

	}catch( const char *msg){
		cout << msg ;}
}

void quicksort(vector <int> &arr, int low, int high){

	if( high <= low ) return ;

	int i, j ;

	partition(arr, low, high, i, j) ;

	quicksort(arr, low, i) ;
	quicksort(arr, j, high) ;
}

int main(){

	int n ;
	cin >> n ;
	vector<int> arr(n) ;
	for(int i = 0 ; i < n ; i++ )
	cin >> arr[i] ;
	quicksort(arr, 0, n-1) ;
	for(int i = 0 ; i < n ; i++ )
	cout << arr[i] << " " ;
	return 0 ;
}
