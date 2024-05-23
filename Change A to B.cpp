#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long a,b,k;
	    cin>>a>>b>>k;
	    long long count=0;
	    while(true){
	        if(b<a*k){
	            count+=(b-a);
	            break;
	        }
	        if(b%k==0){
	            b/=k;
	            count++;
	        }
	        else{
	           int r=b%k;
	           count+=r;
	           b-=r;
	        }
	    }
	    cout<<count<<endl;
	}

}
