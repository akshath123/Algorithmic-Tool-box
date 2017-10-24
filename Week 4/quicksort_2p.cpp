#include<iostream>	
#include<vector>
#include<cstdlib>

using namespace std ;

int position(vector<int> &a, int l, int r){

	int x = a[l] , j = l ;

	for(int i = l+1 ; i <= r ; i++ ){

		if( a[i] <= x ){
			j++ ;
			swap(a[i], a[j]) ;
		}
	}

	swap(a[j], a[l]) ;
	return j ;
}

void randomized_quick_sort(vector<int > &a, int l, int r){

	if( l >= r )
		return ;

	int k = l + rand() % ( r - l + 1 ) ;
	swap(a[k], a[l]) ;
	int m = position(a, l, r) ;

	randomized_quick_sort(a, l, m-1) ;
	randomized_quick_sort(a, m+1, r) ;	
}

int main(){

	int n ;
	cin >> n ;
	vector<int > a(n) ;

	for(int i = 0 ; i < n ; i++ )
	cin >> a[i] ;
		
	randomized_quick_sort(a, 0, a.size()-1) ;
	for(int i = 0 ; i < n ; i++ )
	cout << a[i] << " " ;
}
