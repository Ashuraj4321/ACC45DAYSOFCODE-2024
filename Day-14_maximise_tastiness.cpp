#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

       
        int max_tastiness = a + c; 

   
        max_tastiness = max(max_tastiness, a + d);
        max_tastiness = max(max_tastiness, b + c); 
        max_tastiness = max(max_tastiness, b + d); 

        
        cout << max_tastiness << endl;
    }

    return 0;
}
