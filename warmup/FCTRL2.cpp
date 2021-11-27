#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        
        boost::multiprecision::int1024_t N, F = 1;
        cin >> N;
        
        while (N > 0) {
            F *= N;
            --N;
        }
        cout << F << endl;
    }
    return 0;
}