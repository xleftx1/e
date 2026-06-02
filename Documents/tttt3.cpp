#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;

    cout << "Ingrese el primer lado: ";
    cin >> lado1;

    cout << "Ingrese el segundo lado: ";
    cin >> lado2;

    cout << "Ingrese el tercer lado: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "Es un triángulo equilátero" << endl;
    } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
        cout << "Es un triángulo escaleno" << endl;
    } else {
        cout << "Es un triángulo isósceles" << endl;
    }

    return 0;
}
