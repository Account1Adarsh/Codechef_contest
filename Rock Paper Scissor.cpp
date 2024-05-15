#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    char c='q';
	    for(int i=0;i<n;i++){
	        if(s[i]!=c){
	            count++;
	            c=s[i];
	        }
	        else{
	            c='q';
	        }
	    }
	    cout<<count<<endl;
	}

}
