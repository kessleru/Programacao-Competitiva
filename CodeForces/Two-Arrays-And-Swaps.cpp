#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t, n, k, s;
    
    cin >> t;

    for (int i = 0; i < t; i++) {
        s = 0;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for (int j = 0; j < k; j++) {
            if (b[j] > a[j]) {
                swap(a[j], b[j]);
            } else if (b[j] <= a[j]) {
                break;
            }
        }
        for (int i = 0; i < n; i++) s += a[i];
        cout << s << endl;
    }
}