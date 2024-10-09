#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
//code goes from here
    while (T > 0) {
        int X, Y; 
        cin >> X >> Y;


        int time_to_catch = abs(Y - X);
        
     
        cout << time_to_catch << endl;

        T--; 
    }

    return 0;
}
