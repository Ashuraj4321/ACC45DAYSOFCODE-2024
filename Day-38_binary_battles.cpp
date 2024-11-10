#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int T;
    cin >> T;  
    
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B; 
        
        
        int rounds = log2(N);
        
        
        int total_time = rounds * A + (rounds - 1) * B;
        
        
        cout << total_time << endl;
    }
}

int main() {
    solve();  
    return 0;
}
