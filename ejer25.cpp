#include <iostream>
using namespace std;

int main18() {
    int numero;
    int longitud = 0;
    cout<<"Ingresa un número entero: ";cin>>numero;
    int temp = numero;

    // Iteramos mientras el número temporal no sea 0
    while (temp != 0){
        temp = temp /10;
        longitud++;
    }

    cout<<"El numero "<<numero<<" tiene una longitaud de "<<longitud<<" dígitos";

    return 0;
}

