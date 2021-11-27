#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int N, cnt = 0;
        cin >> N;
        
        while (N > 0) {
            if (N % 10 == 4)
                ++cnt;
                
            N /= 10;
        }
        cout << cnt << endl;
    }
    
    return 0;
}