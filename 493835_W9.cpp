#include <iostream>
#include <cmath>     
using namespace std;

const double PI = 3.1416;

// a. Hitung jarak antara dua titik
double jarak(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// b. Hitung radius lingkaran (memanggil jarak)
double radius(double x1, double y1, double x2, double y2) {
    return jarak(x1, y1, x2, y2);
}

// c. Hitung keliling lingkaran
double keliling(double r) {
    return 2 * PI * r;
}

// d. Hitung luas lingkaran
double luas(double r) {
    return PI * pow(r, 2);
}

int main() {
    double x1, y1, x2, y2;

    // Input dari pengguna
    cout << "Masukkan koordinat pusat lingkaran (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat sembarang titik (x2 y2): ";
    cin >> x2 >> y2;

    // Hitung jari jari
    double r = radius(x1, y1, x2, y2);

    // Tampilkan hasil
    cout << fixed;
    cout << "Radius (jari-jari): " << r << endl;
    cout << "Diameter: " << 2 * r << endl;
    cout << "Keliling: " << keliling(r) << endl;
    cout << "Luas: " << luas(r) << endl;

    return 0;
}