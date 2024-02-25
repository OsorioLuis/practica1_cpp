#include <math.h>
#include <iostream>

using namespace std;

int main3(){
    float a, perimetro, area;
    float pi = 3.1416;
    cout<<"Digita el valor del lado del circulo ";cin>>a;
    cout<<"el perimetro del cuadrado es "<<2*pi*a;
    cout<<"El Area del ciruculo es "<<pi*pow(a, 2);

    return 0;
}
