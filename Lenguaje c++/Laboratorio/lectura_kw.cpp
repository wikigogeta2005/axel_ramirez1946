#include <iostream> 
using namespace std;

main()
{

int kw;
float total,precio,preciototal;

cout <<"Ingrese la cantidad de kw usados: ";
cin >> kw;
cout <<"Ingrese el precio: ";
cin >> precio;

if(kw>700)
{
    cout <<"Existira un incremento del 5% en el valor a pagar "<< endl ;
    total=(0.05)* precio; 
}
else
{
   cout <<"No existira un incremento del 5% en el valor a pagar" << endl;
}

preciototal=total+precio;

cout<<"El precio final a pagar es "<< preciototal<< endl;



}