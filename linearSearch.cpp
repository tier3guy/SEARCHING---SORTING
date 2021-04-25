#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int k;
	cin >> k;
	int ans = -1;

	for(int i=0;i<n;i++){
		// linearly traveling to each element ans checking if that element is equal to the searched element or not.
		if(arr[i]==k){
			ans = i;
			break;
		}
	}

	cout << "element found at : " << ans << endl;
}
