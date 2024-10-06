#include <iostream>
using namespace std;
 
 //code goes from here
int main() {
    int T;
    cin >> T; 

    while (T--) {
        long long X, Y;
        cin >> X >> Y; 

        if (Y < X) {
            
            cout << 0 << endl;
        } else {
            
            long long months = (Y / X) - 1;
            cout << months << endl;
        }
    }

    return 0;
}
