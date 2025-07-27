//q6
#include <iostream>
using namespace std;

class Complex2;

class Complex {
protected:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void input() {
        cout << "Enter base complex number:" << endl;
        cout << "  Real: ";
        cin >> real;
        cout << "  Imag: ";
        cin >> imag;
    }

    friend class Complex2; // Allow Complex2 to access protected members
};

class Complex1 : public Complex {
private:
    float real1;
    float imag1;
public:
    Complex1(float r = 0, float i = 0) : Complex() {
        real1 = r;
        imag1 = i;
    }

    void inputderived() {
        input(); // Get base complex number
        cout << "Enter derived class complex number:" << endl;
        cout << "  Real: ";
        cin >> real1;
        cout << "  Imag: ";
        cin >> imag1;
    }

    Complex add() {
        float r = real1 + real;
        float i = imag1 + imag;
        cout << "Sum (Base + Derived): " << r << " + " << i << "i" << endl;
        return Complex(r, i);
    }

    friend class Complex2;
};

class Complex2 {
private:
    float real;
    float imag;
public:
    Complex2(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void inputfriend() {
        cout << "Enter Complex2's own complex number:" << endl;
        cout << "  Real: ";
        cin >> real;
        cout << "  Imag: ";
        cin >> imag;
    }

    void sub(Complex1& c) {
        float r = c.real - real;
        float i = c.imag - imag;
        cout << "Difference (Base - Complex2): " << r << " + " << i << "i" << endl;
    }
};

int main() {
    Complex1 c1;
    c1.inputderived();

    Complex2 c2;
    c2.inputfriend();

    c1.add();       // Add base + derived
    c2.sub(c1);     // Subtract friend from base

    return 0;
}
