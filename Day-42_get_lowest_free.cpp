#include <iostream>
#include <algorithm>  

using namespace std;

int main() {
    int T;
    cin >> T;  

    
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;  
        
        
        int total_to_pay = A + B + C - min(min(A, B), C);
        
        
        cout << total_to_pay << endl;
    }

    return 0;
}

