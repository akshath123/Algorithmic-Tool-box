#include<iostream>
#include<vector>
#include<tuple>

using namespace std ;

long long int eval(long long int a, long long int b, char oper){
	if( oper == '+' )
		return a+b ;
	else if( oper == '-' )
		return a-b ;
	else if( oper == '*' )
		return a*b ;
	return 0 ;
}

tuple<long long int, long long int> minAndMax(int i, int j, vector<vector<long long int> > m, vector<vector<long long int> > M, vector<char> oper){

	long long int min_num = 99, max_num = -99 ;
	for(int k = i ; k <= j-1 ; k++ ){
		
		long long int a = eval(M[i][k], M[k+1][j], oper[k-1]) ;
		long long int b = eval(m[i][k], M[k+1][j], oper[k-1]) ;
		long long int c = eval(M[i][k], m[k+1][j], oper[k-1]) ;
		long long int d = eval(m[i][k], m[k+1][j], oper[k-1]) ;
		
		min_num = min(a, min(b, min(c, min(d, min_num)))) ;
		max_num = max(a, max(b, max(c, max(d, max_num)))) ;
	}

	return make_tuple(min_num, max_num) ;
}

int Parentheses(vector<char> oper, vector<long int> num){

	int n1 = num.size() ;
	
	vector<long long int > v(n1+1) ;
	vector<vector <long long int> > m(n1+1, v) ;
	vector<vector <long long int> > M(n1+1, v) ;

	for(int i = 1 ; i <= n1 ; i++ ){
		m[i][i] = num[i-1] ;
		M[i][i] = num[i-1] ;
	}

	for(int s = 1 ; s <= n1-1 ; s++ ){
		for(int i = 1 ; i <= n1-s ; i++ ){
			int j = i+s ;
			tie(m[i][j], M[i][j]) = minAndMax(i, j, m, M, oper) ;
		}
	}

	return M[1][n1] ;
}

int main(){

	string s ;
	
	cin >> s ;

	vector<char > oper ;
	vector<long int > num ; 

	for(int i = 0 ; i < s.length() ; i++ ){

		if( (s[i] >= '0') && (s[i] <= '9') )
			num.push_back(s[i] - '0') ;
		else
			oper.push_back(s[i]) ;		
	}

	cout << Parentheses(oper, num) ;
}
