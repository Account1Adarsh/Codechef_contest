#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long x;
	    cin>>x;
	    int remaining=n%9;
	    long long p=x/9;
	    cout<<p*45+remaining*(r+1)/2<<endl;
	}

}
