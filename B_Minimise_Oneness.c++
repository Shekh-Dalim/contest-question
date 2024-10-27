#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Length of the binary string
        
        string result;
        
        // Alternating pattern to minimize oneness
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                result += '0';
            } else {
                result += '1';
            }
        }
        
        // Output the result
        cout << result << endl;
    }
    
    return 0;
}
