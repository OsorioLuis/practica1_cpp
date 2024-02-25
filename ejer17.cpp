#include <iostream>

using namespace std;

int main7(){
    int a = 1,b = 0;
    while(a != 0){
        cout<<"Adivina el numero, ingresa el que piensas: ";cin>>a;
        if(b < a){
            b = a;
        };
    };
    cout<<"Adivinaste, el numero es 0";
    cout<<"el numero mayor ingresado es: "<<b;
    return 0;
}
