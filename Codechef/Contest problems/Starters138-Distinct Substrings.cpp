#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
        if(b  == 1)cout << "Yes"<<endl;
        
        else 
        {
            int required_zeroes = b*(b+1)/2;
            int minimum_length = required_zeroes+b-1;
            
            if(minimum_length <=a)cout <<"Yes"<<endl;
            
            else cout << "No"<<endl;
        }

	}

}
