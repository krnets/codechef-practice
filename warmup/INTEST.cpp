#include <iostream>

using namespace std;

int main() {
    int n, k, x, count = 0;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        
        if (x % k == 0)
            ++count;
    }
    cout << count << endl;
    
    return 0;
}