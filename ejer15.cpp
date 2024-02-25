#include <iostream>

using namespace std;

int main6(){
    int a = 1,b;
    while(a != 0){
        cout<<"Adivina el numero, ingresa el que piensas: ";cin>>a;
        if(a != 0){
            b = b+a;
        };
    };
    cout<<"Adivinaste, el numero es 0";
    cout<<"La suma de los numeros ingresados es: "<<b;
    return 0;
}
