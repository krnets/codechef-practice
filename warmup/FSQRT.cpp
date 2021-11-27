#include <iostream>
using namespace std;

double simple_sqrt(double num){
    int i = 10;
    double x = num /2;
    
    while (i-- && num){
        x = ((num / x) + x) /2 ;
    }
    return x;
}

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int R;
        cin >> R;
        cout << int(simple_sqrt(R)) << endl;
    }
	return 0;
}
