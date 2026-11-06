#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n ; cin >> n ; 
	// n is the number of strings we have 
	while(n--){
	string s ; cin >> s; 
	if(s.size()<11)cout << s << "\n";  
	else cout << s[0] << s.size()-2 << s[s.size()-1] << "\n" ; 
	}
}
