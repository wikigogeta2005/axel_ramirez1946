#include <iostream>
using namespace std;

int separarcifras(int num,int digito)
{
    int suma=0;
    bool bandera=true;
    while (num>0)
    {
        suma+=num%10;
        if (bandera )
        {
             digito=num/=10;
                bandera=false;

        }
        suma+=num%10;
        num/=10;
        

    }
    return digito;
}

main()
{
    int num,digito;
    cout<<"Introduce un numero: ";
    cin>>num;
    digito=separarcifras(num,digito);
    cout<<"El ultimo digito de la suma de las cifras de: "<<digito<<endl;


}