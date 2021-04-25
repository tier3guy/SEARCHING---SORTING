#include<iostream>
using namespace std;

int binarySearch(int arr[],int l,int r,int k){
	int mid = (l+r)/2;
	if(arr[mid]==k){
		return mid;
	}
	if(k < arr[mid]){
		return binarySearch(arr , l ,mid-1,k);
	}
	return binarySearch(arr,mid+1,r,k);
}

int main(){

	int n;
	cin >> n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int k;
	cin >> k;

	int ans = binarySearch(arr,0,n-1,k);
	cout << ans << endl;

	return 0;
}
