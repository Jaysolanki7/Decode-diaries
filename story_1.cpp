#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days : ";
    cin >> n;

    int restingdays = 0;
    int starroots = 0;
    int sunbuds = 0;
    int crystalflowers = 0;
    int moonblossoms = 0;
    int wildleafs = 0;
    int totalflowers = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 && i % 3 == 0 && i % 4 == 0) {
            restingdays++;
        } 
        else if (i % 2 == 0 && i % 3 == 0) {
            crystalflowers++;
        } 
        else if (i % 4 == 0) {
            starroots += 4;
        } 
        else if (i % 3 == 0) {
            moonblossoms += 3;
        } 
        else if (i % 2 == 0) {
            sunbuds += 2;
        } 
        else {
            wildleafs++;
        }
    }

    totalflowers = starroots + sunbuds + crystalflowers + moonblossoms + wildleafs;

    cout << "\n**********Results**********\n";
    cout << "Sunbuds: " << sunbuds << "\n";
    cout << "Moonblossoms: " << moonblossoms << "\n";
    cout << "Starroots: " << starroots << "\n";
    cout << "Crystal Flowers: " << crystalflowers << "\n";
    cout << "Wildleafs: " << wildleafs << "\n";
    cout << "Soil Resting Days: " << restingdays << "\n";
    cout << "Total Flowers Planted: " << totalflowers << "\n";

    return 0;
}