#include<iostream>
#include<vector>

using namespace std ;

int computeEditDistance(string s1, string s2){

	int n1 = s1.length() ;
	int n2 = s2.length() ;
	
	int min ;

	vector<int > v(n2+1) ;
	vector<vector <int > > val(n1+1, v) ;

	for(int i = 0 ; i < n1+1 ; i++ )
		val[i][0] = i ;

	for(int j = 0 ; j < n2+1 ; j++ )
		val[0][j] = j ;

	for(int i = 1 ; i < n1+1 ; i++ ){
		for(int j = 1 ; j < n2+1 ; j++ ){

			if( s1[i-1] == s2[j-1] ){
				min = val[i-1][j-1] ;
				if( min > (val[i-1][j] + 1) )
					min = val[i-1][j] + 1;
				else if( min > (val[i][j-1] + 1) )
					min = val[i][j-1] + 1 ;
			}
			else{
				min = val[i-1][j-1] + 1 ;
				if( min > (val[i-1][j] + 1) )
					min = val[i-1][j] + 1 ;
				else if( min > (val[i][j-1] + 1) )
					min = val[i][j-1] + 1 ;
					
			}

			val[i][j] = min ;
		}
	}

	/*for(int i = 0 ; i < n1+1 ; i++ ){
		for(int j = 0 ; j < n2+1 ; j++ ){
			cout << val[i][j] << " " ;
		}
		cout << "\n" ;
	}*/

	return val[n1][n2] ;
}

int main(){

	string s1, s2 ;
	cin >> s1 ;
	cin >> s2 ;
	cout << computeEditDistance(s1, s2) ;
}
