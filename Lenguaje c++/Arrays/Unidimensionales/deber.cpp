#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenardatos(float tabla[10][10], int fil, int col) {
    srand(time(NULL));  
    for (int i = 0; i < fil; i++) {
        for (int k = 0; k < col; k++) {
            tabla[i][k] = rand() % (20 - 10 + 1) + 10;
        }
    }
}

void imprimirtabla(float tabla[10][10], int fil, int col) {
    for (int i = 0; i < fil; i++) {
        for (int k = 0; k < col; k++) {
            if (i == k || i + k == col - 1) {
                cout << tabla[i][k] << "\t";
            } else {
                cout << "\t";  
            }
        }
        cout << endl;
    }
}

float sumadiagonaprincipal(float tabla[10][10], int fil, int col) {
    float suma = 0;
    for (int i = 0; i < fil; i++) {
        suma += tabla[i][i];  
    }
    cout << "La suma de los elementos de la diagonal principal es " << suma << endl;
    return suma;
}

float sumadiagonalsecundaria(float tabla[10][10], int fil, int col) {
    float suma = 0;
    for (int i = 0; i < fil; i++) {
        suma += tabla[i][col - 1 - i];  
    }
    cout << "La suma de los elementos de la diagonal secundaria es " << suma << endl;
    return suma;
}

int main() {
    int num;
    cout << "Introduce el numero de filas las mismas que seran para las columnas ya que es una matriz cuadrada : ";
    cin >> num;
    if (num <= 0 || num > 10) {
        cout << "Existe un error, intenta de nuevo por favor." << endl;
        return 1;
    }
    float tabla[10][10];

    llenardatos(tabla, num, num);
    imprimirtabla(tabla, num, num);
    sumadiagonaprincipal(tabla, num, num);
    sumadiagonalsecundaria(tabla, num, num);

  
}