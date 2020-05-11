#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int a;
    int b;
    int c;
    double x1;
    double x2;
    cout<<"A continuación se le solicitarán 3 números, coloque el primer número"<<endl;
    cin>>a;
    cout<<"Coloque el segundo número"<<endl;
    cin>>b;
    cout<<"Coloque el tercer número"<<endl;
    cin>>c;
    x1=((-b)+sqrt(((pow(b,2))-(4*a*c))))/(2*a);
    x2=((-b)-sqrt(((pow(b,2))-(4*a*c))))/(2*a);
    cout<<"El valor de x1 es: "<<x1<<" y el valor de x2 es: "<<x2<<endl;

}