#include <iostream>
using namespace std;

int main() {
    int t;  // number of test cases
    cin >> t;
    
    while (t--) {
        int n;  // the limit for each game
        cin >> n;
        
        int position = 0;
        int move = 1;
        bool sakurakoTurn = true;  // Sakurako starts the game
        
        while (true) {
            if (sakurakoTurn) {
                position -= move;  // Sakurako moves in the negative direction
            } else {
                position += move;  // Kosuke moves in the positive direction
            }
            
            if (abs(position) > n) {
                // If the absolute position exceeds n, check whose move it was
                if (sakurakoTurn) {
                    cout << "Kosuke" << endl;  // If Sakurako moved and position exceeds, Kosuke wins
                } else {
                    cout << "Sakurako" << endl;  // If Kosuke moved and position exceeds, Sakurako wins
                }
                break;
            }
            
            // Prepare for the next move
            move += 2;  // The next move is 2 units larger than the previous
            sakurakoTurn = !sakurakoTurn;  // Alternate between Sakurako and Kosuke
        }
    }
    
    return 0;
}
