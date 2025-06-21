#include <iostream>
#include <cmath>
using namespace std;


int main() {
    
    double a, b, c, x1, x2;
    
    cin >> a >> b >> c;

    x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    
    if (a == 0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    if (b*b - 4*a*c < 0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    cout.precision(5);
    cout << fixed;
    cout << "R1 = " << x1 << endl;
    cout << "R2 = " << x2 << endl;
    return 0;
}