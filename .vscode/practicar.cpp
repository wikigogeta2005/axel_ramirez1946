#include <iostream>
using namespace std;

main()
{
    int limitesuperior,limiteinferior;
    cout<<"Ingrese por favor un valor para el limite inferior: ";
    cin>>limiteinferior;
    cout<<"Ingrese por favor un valor para el limite superior: ";
    cin>>limitesuperior;

    while(limiteinferior >= limitesuperior)
    {
        cout<<"Error, el limite superior no puede ser menor o igual al limite inferior, Por favor ingresar nuevamente los valores: ";
        cout<<"Ingrese por favor un valor para el limite inferior: ";
        cin>>limiteinferior;
        cout<<"Ingrese por favor un valor para el limite superior: ";
        cin>>limitesuperior;

    }






}