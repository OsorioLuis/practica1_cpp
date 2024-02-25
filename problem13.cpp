#include <iostream>

int main42() {
    int value, temp, total = 0;
    int count;
    std::cout<<"ingresa un numero entero: ";std::cin>>value;

    for(int i = value; i > 1;i--){
        count = 0;
        for(int j = 1; j < value+1;j++){
            if(i % j == 0){
                count ++;
            }
        }if(count <= 2){
            total += i;
        }
        //value--;


    }
    std::cout<<"la suma de los primos anteriores es: "<<total;


    return 0;
}
