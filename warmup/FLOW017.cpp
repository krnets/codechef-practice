#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> v(3); 
    
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        cout << v[1] << endl;
    }
	return 0;
}
