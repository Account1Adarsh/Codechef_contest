#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    long long arr[n+1];
	    for(int i=1;i<=n;i++) cin>>arr[i];
	    long long count=0;
	    long long k=1;
	    for(int i=1;i<=n;i++){
	        k=1;
	        if(arr[i]==1){
	            count+=n;
	            
	        }
	        else{
	            for(int j=1;j<=n;j++){
	            k*=arr[i];
	            if(k>1e9){
	                break;
	            }
	            if(k<=arr[j]){
	                count++;
	             }
	            }
	        }
	        
	    }
	    cout<<count<<endl;
	}

}
