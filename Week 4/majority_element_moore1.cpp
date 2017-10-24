#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;

int getMajorityElement(vector<int > arr){

	int count = 1, majorInd = 0 ;
	for(int i = 0 ; i < arr.size() ; i++ ){
		if( arr[majorInd] == arr[i] )
			count++ ;
		else
			count-- ;

		if( count == 0 ){
			majorInd = i ;
			count = 1 ;
		}
	}
	return arr[majorInd] ;
}

bool isMajorityElement(vector <int > arr, int cand){

	int freq = count( arr.begin(), arr.end(), cand) ;
	if( freq > (arr.size() / 2) ){
		return true ;
	}
	return false ;
}

int majority(vector<int > arr){

	int cand = getMajorityElement(arr) ;
	if( isMajorityElement(arr, cand) ){	
		return 1 ;
	}
	return 0 ;
}

int main(){

	int n ;
	cin >> n ;
	vector<int > arr(n) ;
	for(int i = 0 ; i < n ; i++ )
	cin >> arr[i] ;
	cout << majority(arr) ;
}
