#include<iostream>
#include<vector>

using namespace std ;

long long fractional_knapsack(int W, vector<int > &v, vector<int > &w, int n){

	double totValue = 0.0, maxUnitCost = 0.0 , a = 0.0 ;
	int times = 0, ind = 0 ;

	while( n > times ){

		if( W == 0 )
			return totValue ;
		
		maxUnitCost = 0 ;
		for(int i = 0 ; i < n ; ++i ){
			if( w[i] > 0 && maxUnitCost < (v[i]/w[i]) ){
				maxUnitCost = v[i] / w[i] ;
				ind = i ;
			}
		}

		a = ( W > w[ind] )? w[ind] : W ;
		totValue = totValue + a  * (v[ind]/w[ind]) ;
		W = W - a ;
		w[ind] = w[ind] - a ;

		times++ ;
	}

	return totValue ; 
}

int main(){

	int n, capacity ;
	int temp1, temp2 ;

	cin >> n >> capacity ;

	vector<int > values ;
	vector<int > weights ;

	for(int i = 0 ; i < n ; i++ ){
		cin >> temp1 >> temp2 ;
		values.push_back(temp1) ;
		weights.push_back(temp2) ;
	}

	cout << fractional_knapsack(capacity, values, weights, n) ;
}
