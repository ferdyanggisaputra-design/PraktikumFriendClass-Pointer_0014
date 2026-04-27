#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    double d1, d2;

public:
    void inputData() {
        cout << "Masukkan diagonal 1 layang-layang: ";
        cin >> d1;
        cout << "Masukkan diagonal 2 layang-layang: ";
        cin >> d2;
    }

double hitungLuas() {
        return 0.5 * d1 * d2;
    }
};

class BelahKetupat {
private:
    double d1, d2;
    double sisi;

public:
    void inputData() {
        cout << "Masukkan diagonal 1 belah ketupat: ";
        cin >> d1;
        cout << "Masukkan diagonal 2 belah ketupat: ";
        cin >> d2;
        cout << "Masukkan sisi belah ketupat: ";
        cin >> sisi;
    }

double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }
};

