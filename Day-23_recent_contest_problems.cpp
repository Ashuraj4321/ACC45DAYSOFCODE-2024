#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;  
    cin >> T;
    
    while (T--) {
        int N;  
        cin >> N;
        
        int start38_count = 0;  
        int ltime108_count = 0;  

        for (int i = 0; i < N; ++i) {
            string code;
            cin >> code;  
            
            
            if (code == "START38") {
                start38_count++;
            } else if (code == "LTIME108") {
                ltime108_count++;
            }
        }

        
        cout << start38_count << " " << ltime108_count << endl;
    }

    return 0;
}
