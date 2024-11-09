
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int Y, Z;
        cin >> Y >> Z;
        
        
        int subscriptions = ceil(Y / 6.0);
        
        
        int totalCost = subscriptions * Z;
        
        cout << totalCost << endl;
    }

    return 0;
}
