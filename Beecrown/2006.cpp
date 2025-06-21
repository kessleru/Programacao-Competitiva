#include <iostream>
using namespace std;
 
int main() {
 
    int t, array[5], r = 0;

    cin >> t;

    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    
    for (int i = 0; i < 5; i++) {
        if (array[i] == t) {    
            r ++;
        }
    }

    cout << r << endl;

    return 0;
}