#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of elements in array a
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Reading the elements of array a
        }

        // Sort the array to maximize the score
        sort(a.begin(), a.end());

        int score = 0;
        // The score is the sum of differences between the max and min of each prefix
        for (int i = 0; i < n / 2; i++) {
            score += (a[n - i - 1] - a[i]) * 2; // Subtract smaller prefix (min) from larger prefix (max)
        }

        cout << score << endl; // Output the maximum score for this test case
    }

    return 0;
}
