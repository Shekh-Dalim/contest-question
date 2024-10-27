#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n; // Length of the binary string
        cin >> n;
        
        string s; // Binary string
        cin >> s;
        
        // If Alice has the last move (n is odd)
        if (n % 2 == 1) {
            bool found_true = false;
            for (int i = 0; i < n; i += 2) { // Alice picks the odd positions (0-indexed even)
                if (s[i] == '1') {
                    found_true = true;
                    break;
                }
            }
            if (found_true) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
        // If Bob has the last move (n is even)
        else {
            bool found_false = false;
            for (int i = 1; i < n; i += 2) { // Bob picks the even positions (0-indexed odd)
                if (s[i] == '0') {
                    found_false = true;
                    break;
                }
            }
            if (found_false) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
