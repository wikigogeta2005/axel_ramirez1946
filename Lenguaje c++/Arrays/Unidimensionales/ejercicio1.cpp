#include <iostream>
#include <cstdlib>  // Biblioteca para generar números aleatorios
#include <ctime>    // Biblioteca para manejar el tiempo
using namespace std;

void llenardatos(float v[], int ne) {
    srand(time(NULL)); // Inicializar el generador de números aleatorios
    for (int i = 0; i < ne; i++) {
        // Generar números aleatorios en el rango [50.0, 99.9] sin usar RAND_MAX
        v[i] = 50.0 + rand() % 50 + (rand() % 10) / 10.0;
    }
}

void verDatos(float v[], int ne) {
    cout << "Los elementos del vector son: " << endl;
    for (int i = 0; i < ne; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

float sumaPromediocifras(float v[], int ne) {
    float suma = 0;
    for (int i = 0; i < ne; i++) {
        suma += v[i];
    }
    return suma / ne;
}

int contardebajopromedio(float v[], int ne, float promedio) {
    int contador = 0;
    for (int i = 0; i < ne; i++) {
        if (v[i] < promedio) {
            contador++;
        }
    }
    return contador;
}

void guardaelementosmenores(float v[], int ne, float promedioNumeros, float lista[]) {
    int j = 0;
    for (int i = 0; i < ne; i++) {
        if (v[i] < promedioNumeros) {
            lista[j] = v[i];
            j++;
        }
    }
}

int main() {
    int ne, menores;
    float promedioNumeros;

    cout << "Cuantos elementos tiene el vector: ";
    cin >> ne;

    float vector[ne];
    llenardatos(vector, ne);
    verDatos(vector, ne);

    promedioNumeros = sumaPromediocifras(vector, ne);
    cout << "El promedio de los datos generados es: " << promedioNumeros << endl;

    menores = contardebajopromedio(vector, ne, promedioNumeros);
    cout << "Los elementos debajo del promedio son: " << menores << endl;

    float listamenores[menores];
    guardaelementosmenores(vector, ne, promedioNumeros, listamenores);
    verDatos(listamenores, menores);

    return 0;
}
