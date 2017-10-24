#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;

vector<int > cover_segment(vector<int > a, vector<int > b){
}

int main(){

	int n ;
	cin >> n ;
	vector<int > a(n) ;
	vector<int > b(n) ;

	for(int i = 0 ; i < n ; ++i ){
		cin >> a[i] >> b[i] ;
	}

	vector<int > optimized_points = cover_segment(a, b) ;

	cout << size(optimized_points) << endl ;

	for(int j = 0 ; j < size(optimized_points) ; j++ ){
		cout << optimized_points[j] << " " ;
	}
}
