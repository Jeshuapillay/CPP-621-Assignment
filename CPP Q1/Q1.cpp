#include <iostream>
#include <cmath>
//Jeshua Leonard Pillay, 401914544

using namespace std;

bool reduce(float num, float denom) {

        if(num <= 0 || denom <= 0) {
            return false;
            cout << endl;
        } else if(num >= 1 || denom >= 1) {
            return true;
            cout << endl;
        }

        return num, denom;
    }

void GCD(int& num, int& denom) {

    int divisor = 0;

    for(int i = fmin(num, denom) ; i > 0; i--) {
        if(num% i == 0 && denom% i == 0) {
            num /= i;
            denom /= i;
        }
    }
}

int main() {

    cout << "Jeshua Leonard Pillay, 401914544" << endl;

    int n, d;
    cout << endl << "Enter numerator: ";
    cin >> n;
    cout << "Enter denominator: ";
    cin >> d;

    if(reduce(n, d) == false) {
        cout << "Fraction Error! All inputted values must be above zero.\a" << endl;
    } else if(reduce(n, d) == true) {
        GCD(n, d);
        cout << "Your answer is: " << n << "/" << d << endl;
    }

    return 0;
}
