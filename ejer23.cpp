#include <iostream>

using namespace std;

int mainaaa(){
    //*******Codigo sacado de mycompiler.io******
    int a, b, result;
    cout<<"Digita el primer numero: ";cin>>a;
    cout<<"Digita el segundo numero: ";cin>>b;

    if(a > b){
        result = a;
    }else{
        result = b;
    }

    while (true){
        if((result % a == 0) && (result % b == 0)){
            cout<<"El minimo comun multiplo es: "<<result;
            break;
        }
        result++;
    }
    return 0;
}
