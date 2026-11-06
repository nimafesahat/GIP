#include<bits/stdc++.h>
using namespace std ;
int rev(int a ){
	int ans=0  ;  
	long long r=1 ; 
	while(a>0){
		if(a%10!=0){
			ans+=(a%10)*r  ;
			r*=10  ; 
		}
		a/=10 ; 
	 
	} 
	return ans ; 
	// a function that revers and remive all zeros from the number 
} 
int main(){
	long long a , b ; cin >> a >> b ; 
	long long sum= a+b ; 
	// the sum of two numbers will be stored  in variable "sum" 
	a=rev(a) ; 
	a=rev(a) ;
	// we call fun rev to remove all zeros from number a   
	b=rev(b)  ; 
	b=rev(b) ; 
	// we call fun rev to remove all zeros from number b
	sum=rev(sum) ; 
	sum=rev(sum) ;  
	// we call fun rev to remove all zeros from number sum
	if(a+b==sum) cout << "YES" ; 
	else cout << "NO"  ; 
	
