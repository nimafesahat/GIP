#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int ar , al ; cin >> ar >> al ; 
	// the numbers of the girl's hands 
	int br , bl ; cin >> br >> bl  ; 
	// the numbers of the boy's hands 
	if(bl>=ar-1 and ar>= ((bl+1)/2)-1 ){
		cout << "YES"  ; 
		return 0  ; 
		// the girl's right hand and boy's left hand could hold 
	}
		if(br>=al-1 and al>= ((br+1)/2)-1 ){
		cout << "YES"  ; 
		return 0  ; 
		// the girl's left hand and boy's right hand could hold 
	}
	cout << "NO" ; 
	// they cant hold hands 
	
}
