#include <iostream>
using namespace std;

int main() {
    int t; // numero de pessoas que clicaram no terceiro link

    cin >> t;
    
    int segundo = 2 * t; // numero de pessoas que clicaram no segundo link
    int primeiro = segundo * 2; // numero de pessoas que clicaram no primeiro link

    cout << primeiro << endl;
}