#include <iostream>

int main41() {
    int numero;
    std::cout<<"ingresa un numero entero: ";std::cin>>numero;

    numero = abs(numero);

    int resultado = 1;
    for (int i = 2; i <= numero; ++i) {
        int num = resultado;
        int b = i;
        while(b != 0){
            int temp = b;
            b = num % b;
            num = temp;
        }
        resultado = (resultado * i) /num;
    }

    std::cout << "El mcm de todos los numeros entre 1 y "<<numero<<" es: "<<resultado;

    return 0;
}
