#include <iostream>
using namespace std;

int main() {
    int F;
    cout << "Enter top floor (F): ";
    cin >> F;

    int totalRings = 0;
    int totalWaits = 0;
    int totalTime = 0;

    for (int floor = 1; floor <= F; floor++) {
        if (floor % 2 != 1) {
            totalRings += 1;
        } 
        else if (floor % 4 == 0) {
            totalRings += 2;
        }

        if (floor % 7 == 0) {
            totalWaits += 5;
        }

        totalTime += 2;
    }

    totalTime += totalWaits ;

    cout << "Total rings: " << totalRings << endl;
    cout << "Total waits: " << totalWaits << endl;
    cout << "Total time: " << totalTime << " seconds" << endl;

    return 0;
}