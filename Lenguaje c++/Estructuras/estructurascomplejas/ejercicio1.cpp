#include <iostream>
using namespace std;

main()
{
    int a,b,c;
    cout<<"Ingrese un primer numero por favor: ";
    cin>>a;
    cout<<"Ingrese un segundo numero por favor: ";
    cin>>b;
    cout<<"Ingrese un tercer numero por favor: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"El mayor de los tres numeros es: "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"El mayor es: "<<b<<endl;
    }
    else if(c>a && c>b){
        cout<<"el mayor es"<<c<<endl;
    }else{
        cout<<"Son iguales "<<endl;
    }
    
}