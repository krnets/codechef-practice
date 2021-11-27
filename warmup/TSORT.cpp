#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    std::vector<int> v;
    
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    for (int x : v) {
        cout << x << endl;
    }
	return 0;
}
