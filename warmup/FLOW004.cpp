#include <iostream>

using namespace std;

int main() {
    int T, N, R;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> N;
        R = N % 10;
        
        while (N >= 10) {
            N /= 10;
        }
        cout << N + R << endl;
    }
    
    return 0;
}