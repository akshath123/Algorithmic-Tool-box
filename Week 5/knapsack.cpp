#include<iostream>
#include<vector>

using namespace std ;

int optimal_weight(int W, vector<int > w, int n, vector<int > v){

	vector<vector<int> > arr(n+1, vector<int>(W+1)) ;

	fill(arr[0].begin(), arr[0].end(), 0);
	for(int i = 0 ; i <= n ; i++ ){
		arr[i].push_back(0) ;
	}

	int val = 0 ;

	for(int i = 1 ; i <= n ; i++ ){
		for(int j = 1 ; j <= W ; j++ ){

			arr[i][j] = arr[i-1][j] ;
			if( w[i-1] <= j ){
			   val = arr[i-1][j-w[i-1]] + v[i-1] ;			
			   if( arr[i][j] < val )
				arr[i][j] = val ;
			}
		}
	}

	/*for(int i = 0 ; i <= n ; i++ ){
		for(int j = 0 ; j <= W ; j++ ){
			cout << arr[i][j] << " " ;
		}
		cout << endl; 
	}*/

	return arr[n][W] ;
}

int main(){

	int n, W ;
	
	cin >> W >> n ;
	vector<int > w(n) ;
	vector<int > v(n) ;

	for(int i = 0 ; i < n ; i++ ){
		cin >> w[i] ;
		v[i] = w[i] * 1 ;
	}

	cout << optimal_weight(W, w, n, v) ;
}
