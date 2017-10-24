#include<iostream>
#include<vector>

using std::vector ;
using std::cin ;
using std::cout ;

void FindMajorityElement(const vector<int> &a, int low, int high){
}


int main(){

	int n ;
	cin >> n ;
	vecotr<int> arr(n) ;

	for(size_t i = 0 ; i < n ; i++ )
	cin >> arr[i] ;

	cout << MajorityElement(arr, 0, arr.size()-1) ;
}
