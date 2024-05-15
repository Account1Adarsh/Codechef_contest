#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int que[q];
	    for(int i=0;i<q;i++) cin>>que[i];
	    
	    for(int i=0;i<q;i++){
	        vector<int> v;
	        for(int j=0;j<que[i];j++){
	            v.push_back(arr[j]);
	        }
	        sort(v.begin(),v.end());
	        if(v.size()>=3){
	            long long sum1=0;
	            int p=v.size()-2;
	            long long sum2=v[p+1];
	            int k=0;
	            while(k<p){
	                sum1-=v[k];
	                sum2+=v[p];
	                p--;
	                k++;
	                
	            }
	            cout<<sum2+sum1<<" ";
	            
	        }
	        else cout<<v[0]<<" ";
	        
	    }
	    cout<<endl;
	}

}
