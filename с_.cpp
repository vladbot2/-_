#include <iostream>

using namespace std;

struct Complex {
    int real;

    void set(int r) {
        real = r;
    }

    Complex operator+(Complex other) {
        return { real + other.real };
    }

    Complex operator-(Complex other) {
        return { real - other.real };
    }

    Complex operator*(Complex other) {
        return { real * other.real };
    }

    Complex operator/(Complex other) {
        return { real / other.real };
    }

    void display() {
        cout << real << endl;
    }
};

int main() {
    Complex a, b;
    a.set(3);
    b.set(1);

    Complex sum = a + b;
    Complex difference = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    sum.display();
    difference.display();
    product.display();
    quotient.display();

}
