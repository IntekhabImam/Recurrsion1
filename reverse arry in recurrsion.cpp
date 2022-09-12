#include<iostream>
using namespace std;
	
	int rev(int arr[],int start, int end){
		if(start<end){
			swap(arr[start],arr[end]);
			
			rev(arr, start+1,end-1);
		}
	}
int main(){
	int n,arr[100],i;
	
	cin>>n;
	
	for( i=0;i<n;i++){
		cin>>arr[i];
	}
	
	rev(arr,0,n-1);
	
	for( i=0;i<n;i++){
	cout<<arr[i];
	}
	
	
	return 0;
}
