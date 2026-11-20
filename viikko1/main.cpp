#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Laskee summan ja tulostaa sen
void calcSum(int a, int b) {
    cout << "Summa: " << a + b << endl;
}

// Laskee osamäärän ja tulostaa sen
void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Jakaja ei saa olla nolla!" << endl;
    }
    else {
        cout << fixed << setprecision(2);
        cout << "Osamaara: " << (float)a / b << endl;
    }
}

// Palauttaa summan
int retSum(int a, int b) {
    return a + b;
}

// Palauttaa osamaaran
float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }

    return (float)a / b;
}
int main() {
    int a, b;

    // Kysytaan kayttajalta kaksi lukua
    cout << "Anna ensimmainen luku: ";
    cin >> a;
    cout << "Anna toinen luku: ";
    cin >> b;

    // Kutsutaan tulostavia funktioita
    calcSum(a, b);
    calcDiv(a, b);

    // Kutsutaan arvon palauttavia funktioita
    int summa = retSum(a, b);
    cout << "Palautettu summa: " << summa << endl;

    // Kasitellaan mahdollinen jakovirhe
    try {
        float tulos = retDiv(a, b);

        cout << fixed << setprecision(2);
        cout << "Palautettu osamaara: " << tulos << endl;
    }
    catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
