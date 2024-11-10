#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve() {
    int T;
    cin >> T;  
    
    while (T--) {
        int N;
        cin >> N;  
        vector<int> A(N);
        
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
      
        int total_sum = 0;
        for (int i = 0; i < N; i++) {
            total_sum += A[i];
        }
        
        
        if (total_sum % 2 != 0) {
            cout << -1 << endl;
        } else {
            
            int flips_needed = abs(total_sum) / 2;
            cout << flips_needed << endl;
        }
    }
}

int main() {
    solve();  
    return 0;
}
