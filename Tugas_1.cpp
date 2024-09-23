#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printFactors(int num) {
    cout << "Faktor: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int limit;
    cout << "Masukkan batas: ";
    cin >> limit;

    cout << "Bilangan Ganjil, Genap, dan Prima dari 1 hingga " << limit << ":\n";

    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0) {
            cout << i << " adalah bilangan genap." << endl;
        } else {
            cout << i << " adalah bilangan ganjil." << endl;
        }

        if (isPrime(i)) {
            cout << i << " adalah bilangan prima." << endl;
        }

        printFactors(i);
        cout << "======================\n";
    }

    return 0;
}
