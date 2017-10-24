#include<iostream>
#include<vector>

using std::cin ;
using std::vector ;
using std::cout;

double maxValue(int W, vector<double> &w, vector<double> &v, int n){

	double totVal = 0.0, maxUnitCost = 0.0, a = 0.0 ;
	int times = 1 ;
	int ind , i;

	while( n >= times ){
		
		if( W == 0 )
			return totVal ;

		maxUnitCost = 0 ;
		for( i = 0 ; i < n ; i++ ){
			if( w[i] > 0 && (maxUnitCost < (v[i]/w[i])) ){
				maxUnitCost = v[i]/w[i] ;
				ind = i ;
			}
		}
		
		a = ( w[ind] < W ) ? w[ind] : W ;
		totVal = totVal + a*(v[ind]/w[ind]) ;
		w[ind] = w[ind] - a  ; 
		W = W - a ;		

		times++ ;
	}

	return totVal ;
}

int main(){

	int n , capacity;

	cin >> n >> capacity ;

	vector <double> val(1000) ;
	vector <double>weigh(1000) ;

	for(int i = 0 ; i < n ; i++ ){
		cin >> val[i] >> weigh[i] ;
	}

	cout.precision(10);

	double optimalval = maxValue(capacity, weigh, val, n) ;
	cout << "\n" << optimalval << "\n" ;

	return 0 ;
}
