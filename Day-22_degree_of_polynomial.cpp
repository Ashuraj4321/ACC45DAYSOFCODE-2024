#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N;
        cin >> N; // Read the number of terms
        vector<int> coefficients(N); // Vector to store coefficients

        for (int i = 0; i < N; ++i) {
            cin >> coefficients[i]; // Read each coefficient
        }

        // Find the degree of the polynomial
        int degree = 0;
        for (int i = N - 1; i >= 0; --i) {
            if (coefficients[i] != 0) {
                degree = i; // Set degree to the highest power with a non-zero coefficient
                break;
            }
        }

        cout << degree << endl; // Output the degree of the polynomial
    }

    return 0;
}
