#include<iostream>
using namespace std;
 static int n1=0,n2 =1,n3;
 
 int fib(int n){
 	if(n>0){
 		n3 = n1+n2;
 		n1= n2;
 		n2 = n3;
 		
 		cout<<n3<<" ";
 		
 		fib(n-1);
	 }
 }
int main(){
	int n;
	cin>>n;
	
	cout<<"0 "<<"1 ";  
	  
	fib(n-2);
	
	return 0;
}
