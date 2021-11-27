#include <iostream>
using namespace std;

int main() {
    int T, winner, lead, max_lead = 0, score_A = 0, score_B = 0;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;
        score_A += A;
        score_B += B;   
        lead = abs(score_A - score_B);
        
        if (lead > max_lead) {
            winner = score_A > score_B ? 1 : 2;
            max_lead = lead;
        }
    }
    cout << winner << ' ' << max_lead << endl;
    
	return 0;
}
