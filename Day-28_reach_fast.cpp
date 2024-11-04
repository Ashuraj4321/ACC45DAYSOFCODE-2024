#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

int main() {
    int T;
    cin >> T; 
    vector<int> results;

    for (int i = 0; i < T; ++i) {
        int A, B, K;
        cin >> A >> B >> K; 

        int D = abs(B - A); 
        if (D == 0) {
            results.push_back(0); 
        } else {
            
            int steps = (D + K - 1) / K; 
            results.push_back(steps);
        }
    }

    
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
