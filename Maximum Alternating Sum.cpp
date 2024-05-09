#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int sum=0,val=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(i<n/2) sum+=arr[i];
	        else val+=arr[i];
	        
	    }
	    cout<<val-sum<<endl;
	}

}
