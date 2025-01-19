#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

main()
{
    bool entrar = true;
    int op, Cannum, contador, numverificador, contverificador, suma = 0, contaamigo; 

    while (entrar) // Para crear el menú
    {
        cout << "Menu de opciones" << endl;
        cout << "1. Que numeros abundantes desea" << endl;
        cout << "2. Que numeros deficientes desea" << endl;
        cout << "3. Que numeros Amigos desea" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingresa una opcion: ";
        cin >> op;

        if (op > 0 && op < 4) 
        {
            cout << "Ingresa la cantidad de numeros que desea: " << endl;
            cin >> Cannum;
            contador = 0;
            numverificador = 2; // Empezamos desde el 2
        };

        switch (op)
        {
        case 1: 
            while (contador < Cannum)
            {
                contverificador = 1;
                suma = 0;

                while (contverificador < numverificador)
                {
                    if (numverificador % contverificador == 0)
                    {
                        suma += contverificador;
                    }
                    contverificador++;
                }
                if (suma )
                {
                    cout << "Abundante: " << numverificador << endl;
                    contador++;
                }
                numverificador++;
            }
            break;

        case 2: 
            while (contador < Cannum)
            {
                contverificador = 1;
                suma = 0;

                while (contverificador < numverificador)
                {
                    if (numverificador % contverificador == 0)
                    {
                        suma += contverificador;
                    }
                    contverificador++;
                }
                if (suma < numverificador)
                {
                    cout << "Deficiente: " << numverificador << endl;
                    contador++;
                }
                numverificador++;
            }
            break;

        case 3: 
            while (contador < Cannum)
            {
                contaamigo=1;  
                suma = 0;          
                contverificador = 1;
                while (contverificador < numverificador)
                {
                    if (numverificador % contverificador == 0)
                    {
                        suma += contverificador;
                    }
                    contverificador++;
                }
                int sumaAmigo = 0; 
                contverificador = 1;
                while (contverificador < suma)
                {
                    if (suma % contverificador == 0)
                    {
                        sumaAmigo += contverificador;
                    }
                    contverificador++;
                }
                if (sumaAmigo == numverificador && suma > numverificador)
                {
                    cout << "Amigos: " << numverificador << " ; " << suma << endl;
                    contador++;
                }
                numverificador++;
            }
            break;

        case 4: 
            entrar = false;
            break;

        default:
            cout << "Ingrese nuevamente por favor" << endl;
            break;
        }

        system("pause"); // Pausa
        system("cls");   // Limpia la consola
    }
}
