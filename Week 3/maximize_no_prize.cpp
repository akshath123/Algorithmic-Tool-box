#include<iostream>
#include<vector>

using namespace std ;

int main(){

	int n , k, l;
	cin >> n ;
	int counter = 0 ;
	k = n ;
	vector<int > positive_value ;

	l = 1 ;

	while( k != 0 ){
		
		if( k-l > l || k == l ){
			k = k - l ;
			positive_value.push_back(l) ;
		}

		l++ ;
	}

	cout << positive_value.size() << endl ;
	for(int i = 0 ; i < positive_value.size() ; i++ )
	cout << positive_value[i] << " " ;
}
