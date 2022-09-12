#include<bits/stdc++.h>
using namespace std;
	void fun(int i,int sum ,int n){
		if(i>=n)
		return ;
		else{
			cout<<sum;
			fun(i+1,sum+i,n);
		}
	}

int main(){
	int n = 6;
	fun(1,0,n);
	return 0;
}
