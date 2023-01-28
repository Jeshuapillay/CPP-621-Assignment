#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float calculateCharge(float hrs) {

    float cost = 12.0;

    if(hrs > 3 && hrs < 12) {
        cost += 0.9*(hrs - 3);
    } else if(hrs >= 12) {
        cost = 20.0;
    }

    return cost;
}

int main() {

    // Jeshua Leonard Pillay, 401914544

    cout << "Jeshua Leonard Pillay, 401914544" << endl;

    float table[3][2] = {
                         {0.0, 0.0},
                         {0.0, 0.0},
                         {0.0, 0.0}
                        };

    float hours;

    float totalHours = 0.0;
    float totalCharge = 0.0;

        for(int i = 0; i < 3; i++) {
            cout << endl << "Enter hours: ";
            cin >> hours;

            table[i][0] = hours;
            totalHours += hours;

            table[i][1] = calculateCharge(hours);
            totalCharge += calculateCharge(hours);

        }

            cout << endl << "Car:\tHours:\tCharge:" << endl;

        for(int i = 0; i < 3; i++) {
            cout << i + 1 << "\t" << table[i][0] << "\t" << table[i][1] << endl;
        }

            cout << "Total: \t" << totalHours << "\t" << totalCharge;

    return 0;

}
