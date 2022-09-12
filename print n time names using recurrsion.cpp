#include<bits/stdc++.h>
using namespace std;
	void fun(int i ,int n){
		if(i>=n)
		return ;
		else{
			cout<<"Intekhab"<<" ";
			fun(i+1,n);
		}
		
	}
int main(){
	int n = 6;
	fun(1,n);
	return 0;
}
