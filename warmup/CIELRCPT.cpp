#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        
        int N, mask, p = 0;
        cin >> N;
        
        for (int i = 11; i >= 0; --i) {
            mask = (1 << i);
            p += N / mask;
            N %= mask;
        }
        cout << p << endl;
    }
    
	return 0;
}
