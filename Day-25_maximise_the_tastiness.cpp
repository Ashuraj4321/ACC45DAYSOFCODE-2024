#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int a, b, c, d; 
        cin >> a >> b >> c >> d;

        
        int tastiness1 = a + c;
        int tastiness2 = a + d;
        int tastiness3 = b + c;
        int tastiness4 = b + d;

        
        int max_tastiness = max({tastiness1, tastiness2, tastiness3, tastiness4});

      
        cout << max_tastiness << endl;
    }

    return 0;
}
