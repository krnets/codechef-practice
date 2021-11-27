#include <iostream>
using namespace std;

int main() {
    int soldiers, count_even = 0, count_odd = 0;
    cin >> soldiers;
    
    for (int i = 0; i < soldiers; i++) {
        int weapons;
        cin >> weapons;
        
        if (weapons % 2 == 0)
            ++count_even;
        else ++count_odd;
    }
    cout << (count_even > count_odd ? "READY FOR BATTLE" : "NOT READY") << endl;
    
	return 0;
}
