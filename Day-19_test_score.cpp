#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T; 
    cin >> T;
    
    vector<string> results; 

    for (int i = 0; i < T; i++) {
        int N, X, Y; 
        cin >> N >> X >> Y;
        
        
        if (Y <= N * X && Y % X == 0) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    
    for (const string &result : results) {
        cout << result << endl;
    }

    return 0;
}
