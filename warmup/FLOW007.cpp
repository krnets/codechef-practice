#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int N, R = 0;
        cin >> N;
        
        while (N > 0) {
            R = 10 * R + N % 10;
            N /= 10;
        }
        cout << R << endl;
    }
	return 0;
}
