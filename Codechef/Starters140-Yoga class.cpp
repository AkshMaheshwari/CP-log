#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    

    while(T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        int type1 = N * X;

        int type2 = N / 2;
        int remainingHours = N % 2;
        int combined = type2 * Y + remainingHours * X;

        int  maxEarnings = max(type1, combined);
        cout <<maxEarnings<<endl;
    }
    return 0;
}
