#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

long long maxTotalRevenue(vector <int > a, vector<int > b){

	long double result = 0.0 ;

	sort( a.begin(), a.end()) ;
	sort( b.begin(), b.end()) ;

	for(int i = 0 ; i < a.size() ; i++ ){
		result += (long)(long) (a[i] * b[i]) ;
	}

	return result ;
}

int main(){

	vector<int > a, b ;
	int n, temp ;

	cin >> n ;

	for(int i = 0 ; i < n ; i++ ){	
		cin >> temp ;
		a.push_back(temp) ;
	}

	for(int i = 0 ; i < n ; i++ ){	
		cin >> temp ;
		b.push_back(temp) ;
	}

	cout << maxTotalRevenue(a, b) ;
	
}
