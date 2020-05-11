#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main(){
    double radio;
    double radioc;
    double area;
    double perimetro;
    cout<<"Ingrese el radio del círculo"<<endl;
    cin>>radio;
    radioc= pow (radio, 2);
    perimetro=(2*radio*M_PI);
    area=((M_PI)*radioc);
cout<<"El perímtero del círculo es "<<perimetro<<" y el área del círculo es "<<area<<endl;
}