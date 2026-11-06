#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n ; 
	cin >> n ; 
	//the amount of number in the sequence
	int a[n]  ;  
	//the sequence 
	int minn;  
	//the minimum number will be stored in the "minn" variable 
	cin >> a[0]  ; 
	minn=a[0]  ; 
	//specifying a value for the minn to avoid errors
	for(int i=1 ; i<n ; i++ ){
		cin >> a[i]  ; 
		minn=min(a[i] , minn) ; 
		//check so the variable minn be the minimum number of the sequence untile i 
	}
	
	sort(a , a+n) ;
	//sort the array a to find the second order 
	for(int i=0 ; i<n ; i++ ){
		if(a[i]>minn){
			cout << a[i]  ; 
			return 0 ; 
			//this if will return the first number greater than minn then end the program 
		}
	}
	cout << "NO" ; 
	//if we never find the second orde the program will never end untile this cout 
	return 0 ; 
}
