#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T; 
    vector<int> results;

    for (int i = 0; i < T; ++i) {
        int H, X, Y;
        cin >> H >> X >> Y; 
        
        int attacks_normal = (H + X - 1) / X;

        
        int health_after_special = H - Y;
        int attacks_after_special;
        
        if (health_after_special > 0) {
            attacks_after_special = (health_after_special + X - 1) / X;
        } else {
            attacks_after_special = 0;
        }

        int total_attacks_with_special = 1 + attacks_after_special;

     
        int min_attacks = min(attacks_normal, total_attacks_with_special);
        results.push_back(min_attacks);
    }

   
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
