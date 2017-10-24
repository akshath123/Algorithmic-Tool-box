#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std ;

string largestNumber(vector<string > nums, int n){

	string result = "" ;
	string max_num = "" ;
	int temp_max , res1, res2 ;
	int temp_ind = 0;

	for(int i = 0 ; i < n-1 ; ++i ){
		
		temp_max = nums[0].at(0) - '0' ;	
		temp_ind = 0 ;
		for(int j = 0 ; j < nums.size() ; j++ ){
			if( temp_max <= (nums[j].at(0) - '0') ){

				if( temp_max == (nums[j].at(0) - '0') ){	

					res1 = stoi(nums[temp_ind]) ;
					res2 = stoi( nums[j]) ;
					
					int n1 = nums[temp_ind].length() ;
					int n2 = nums[j].length() ;

					if( ((res1 * pow(10, n2)) + res2 ) > ((res2 * pow(10, n1))  + res1) ){
						continue ;
					}

				}

				max_num = nums[j] ;
				temp_max = nums[j].at(0) - '0' ;
				temp_ind = j ;
			}
		}
	
		result += max_num ;
		nums.erase( nums.begin() + temp_ind ) ;

	}

	result += nums[0] ;
	return result ;
}

int main(){

	int n ;
	cin >> n ;
	vector<string > nums(n) ;

	for(int i = 0 ; i < n ; ++i ){
		cin >> nums[i] ;	
	}

	cout << largestNumber(nums, n) ;	
}
