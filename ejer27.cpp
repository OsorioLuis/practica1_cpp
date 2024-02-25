#include <iostream>

using namespace std;

int main19(){
    int a, b, result;
    char type;
    cout<<"Digita el primer numero: ";cin>>a;
    cout<<"Digita el segundo numero: ";cin>>b;
    cout<<"Digita el tipo de operacion (+,-,*,*/): ";cin>>type;

    switch(type){
        case '+':
            result = a + b;
            cout<<"La operacion es: "<<result;
            break;
        case '-':
            result = a - b;
            cout<<"La operacion es: "<<result;
            break;
        case '*':
            result = a * b;
            cout<<"La operacion es: "<<result;
            break;
        case '/':
            result = a / b;
            cout<<"La operacion es: "<<result;
            break;

    }
    return 0;
}
