#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout << (n % 4 == 0 ? ++n : --n) << endl;
    
	return 0;
}
