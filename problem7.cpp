#include <iostream>

using namespace std;

int main37(){
    int value, actual = 1, temp, prev = 0, result = 0;
    std::cout<<"ingresa un numero positivo: ";std::cin>>value;

    for(int i = 1; i < value;i++){
        temp = prev + actual;
        prev = actual;
        actual = temp;
        if(actual % 2 == 0 && actual < value){
            result += actual;
        }
    }
    std::cout<<result<<" el valor en esa posicion es "<<actual;
    return 0;
}

