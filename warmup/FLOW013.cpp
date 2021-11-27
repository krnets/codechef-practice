#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        cout << (A + B + C == 180 ? "YES" : "NO") << endl;
    }
	return 0;
}
