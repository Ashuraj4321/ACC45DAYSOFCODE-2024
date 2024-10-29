#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N, K; 
        cin >> N >> K;

        vector<int> characteristic_values(N);
        for (int i = 0; i < N; ++i) {
            cin >> characteristic_values[i];
        }

        int wolverine_count = 0; 
        for (int value : characteristic_values) {
            
            int new_value = value + K;
            
            if (new_value % 7 == 0) {
                wolverine_count++;
            }
        }

        
        cout << wolverine_count << endl;
    }

    return 0;
}
