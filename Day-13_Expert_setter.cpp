#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T; 
    vector<string> results; 

    while (T--) {
        int X, Y;
        cin >> X >> Y; 
       
        if (2 * Y >= X) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    
    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
