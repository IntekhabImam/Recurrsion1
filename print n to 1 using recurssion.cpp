#include<bits/stdc++.h>
using namespace std;

void fun(int n){
	if(n<1)
	return ;
	else{
		cout<<n<<" ";
		fun(n-1);
	}
}

int main(){
	int n =8 ;
	fun(n);
	
	return 0;
}
