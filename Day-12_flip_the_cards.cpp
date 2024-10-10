#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int T;
    cin >> T; 
    vector<int> results; 

    while (T--) {
        int N, X;
        cin >> N >> X; 
        int faceDown = N - X;

       
        int minOperations = min(X, faceDown);

        
        results.push_back(minOperations);
    }

   
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
