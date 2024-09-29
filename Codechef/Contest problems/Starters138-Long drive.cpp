#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    
	    double time = 10.0 * (b - a) / (100 - b);
	    
	    
	    if(time <=0) cout << 1 <<endl;
	    
	    else cout << ceil(time) <<endl;
	    
	}

}
