#include <iostream>
using namespace std;

int main() {
    int limiteinferior, limitesuperior, suma = 0, numeros = 0, fueraintervalo = 0;
    bool intervalosiguales = false; // Usar un bool para saber si se introdujo un número igual a los límites

    // Pedir los límites
    cout << "Ingrese un numero para el limite inferior: ";
    cin >> limiteinferior;
    cout << "Ingrese un numero para el limite superior: ";
    cin >> limitesuperior;

    // Asegurarse de que el límite inferior sea menor que el superior
    while (limiteinferior >= limitesuperior) {
        cout << "Error, el limite inferior no puede ser mayor o igual al limite superior." << endl;
        cout << "Ingrese nuevamente los valores correspondientes: " << endl;
        cout << "Ingrese un numero para el limite inferior: ";
        cin >> limiteinferior;
        cout << "Ingrese un numero para el limite superior: ";
        cin >> limitesuperior;
    }

    // Pedir los números y hacer los cálculos
    while (true) {
        cout << "Ingresa cualquier numero (0 para terminar): ";
        cin >> numeros;

        if (numeros == 0) // Salir si el número ingresado es 0
            break;

        // Sumar los números dentro del intervalo
        if (numeros > limiteinferior && numeros < limitesuperior) {
            suma += numeros;
        } else {
            fueraintervalo++; // Contar los números fuera del intervalo
        }

        // Verificar si el número es igual a los límites
        if (numeros == limiteinferior || numeros == limitesuperior) {
            intervalosiguales = true;
        }
    }

    // Mostrar los resultados
    cout << "\nResultados:" << endl;
    cout << "La suma de los números dentro del intervalo (" << limiteinferior << ", " << limitesuperior << ") es: " << suma << endl;
    cout << "Cantidad de números fuera del intervalo: " << fueraintervalo << endl;

    if (intervalosiguales) {
        cout << "Se introdujo un número igual a los límites del intervalo." << endl;
    } else {
        cout << "No se introdujeron números iguales a los límites del intervalo." << endl;
    }

    return 0;
}

