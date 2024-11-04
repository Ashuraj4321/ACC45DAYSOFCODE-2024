#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cumulativeScore1 = 0, cumulativeScore2 = 0;
    int maxLead = 0;
    int winner = 0;

    for (int i = 0; i < N; i++) {
        int score1, score2;
        cin >> score1 >> score2;

     
        cumulativeScore1 += score1;
        cumulativeScore2 += score2;

        
        int lead = 0;
        if (cumulativeScore1 > cumulativeScore2) {
            lead = cumulativeScore1 - cumulativeScore2;
            if (lead > maxLead) {
                maxLead = lead;
                winner = 1; 
            }
        } else {
            lead = cumulativeScore2 - cumulativeScore1;
            if (lead > maxLead) {
                maxLead = lead;
                winner = 2; 
            }
        }
    }

   
    cout << winner << " " << maxLead << endl;
    return 0;
}
