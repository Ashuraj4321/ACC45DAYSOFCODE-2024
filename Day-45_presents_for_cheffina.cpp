#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int N; 
        cin >> N;
        
        // For every 5 gifts, Chef needs to pay for 4 of them
        int coinsRequired = (N / 5) * 4 + (N % 5);
        
        cout << coinsRequired << endl;
    }
    
    return 0;
}
