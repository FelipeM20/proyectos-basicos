#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entre 10 y 999999: ";
    cin >> numero;

    if (numero < 10 || numero > 999999) {
        cout << "Por favor, ingrese un número entre 10 y 999999." << endl;
        return 1; // Salir del programa con un código de error
    }

    int numDigitos = log10(numero) + 1;
    int reverso = 0;
    int numOriginal = numero;

    if (numDigitos == 2) {
        int digito1 = numero % 10;
        reverso = reverso * 10 + digito1;
        numero /= 10;

        int digito2 = numero % 10;
        reverso = reverso * 10 + digito2;
    } else if (numDigitos == 3) {
        int digito1 = numero % 10;
        reverso = reverso * 10 + digito1;
        numero /= 10;

        int digito2 = numero % 10;
        reverso = reverso * 10 + digito2;
        numero /= 10;

        int digito3 = numero % 10;
        reverso = reverso * 10 + digito3;
    } else if (numDigitos == 4) {
        int digito1 = numero % 10;
        reverso = reverso * 10 + digito1;
        numero /= 10;

        int digito2 = numero % 10;
        reverso = reverso * 10 + digito2;
        numero /= 10;

        int digito3 = numero % 10;
        reverso = reverso * 10 + digito3;
        numero /= 10;

        int digito4 = numero % 10;
        reverso = reverso * 10 + digito4;
    } else if (numDigitos == 5) {
        int digito1 = numero % 10;
        reverso = reverso * 10 + digito1;
        numero /= 10;

        int digito2 = numero % 10;
        reverso = reverso * 10 + digito2;
        numero /= 10;

        int digito3 = numero % 10;
        reverso = reverso * 10 + digito3;
        numero /= 10;

        int digito4 = numero % 10;
        reverso = reverso * 10 + digito4;
        numero /= 10;

        int digito5 = numero % 10;
        reverso = reverso * 10 + digito5;
    } else if (numDigitos == 6) {
        int digito1 = numero % 10;
        reverso = reverso * 10 + digito1;
        numero /= 10;

        int digito2 = numero % 10;
        reverso = reverso * 10 + digito2;
        numero /= 10;

        int digito3 = numero % 10;
        reverso = reverso * 10 + digito3;
        numero /= 10;

        int digito4 = numero % 10;
        reverso = reverso * 10 + digito4;
        numero /= 10;

        int digito5 = numero % 10;
        reverso = reverso * 10 + digito5;
        numero /= 10;

        int digito6 = numero % 10;
        reverso = reverso * 10 + digito6;
    }

    if (numOriginal == reverso) {
        cout << "El numero " << numOriginal << " es capicua." << endl;
    } else {
        cout << "El numero " << numOriginal << " no es capicua." << endl;
    }

    return 0;
}

