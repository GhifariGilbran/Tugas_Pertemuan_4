#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan tinggi segitiga: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Cetak spasi
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Cetak bintang
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
