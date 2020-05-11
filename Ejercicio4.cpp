#include <iostream>
using namespace std;
int main()
{
    string nombre;
    double precio;
    int cantidad;
    double totalgasto;
    cout<<"Ingrese el nombre del producto que ha comprado"<<endl;
    cin>>nombre;
    cout<<"Ingrese el precio del producto adquirido"<<endl;
    cin>>precio;
    cout<<"Ingrese la cantidad que adquirió de dicho producto"<<endl;
    cin>>cantidad;
    totalgasto=precio*cantidad;
    cout<<"Usted adquirió "<<cantidad<<" unidades de "<<nombre<<" a un precio de $"<<precio<<". El total gastado es de $"<<totalgasto<<endl;
}