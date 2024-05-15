#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     int x,y;
	     cin>>x>>y;
	     if(x<1000){
	         x+=1000;
	         x*=pow(2,y-1);
	     }
	     else{
	         x*=pow(2,y);
	     }
	     cout<<x<<endl;
	}
	

}
