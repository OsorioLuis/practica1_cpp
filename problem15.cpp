#include <iostream>
#include <math.h>

int rfdghst() {
    int number, temp_der, temp_izq, total;
    std::cout << "Ingresa un numero impar para la espiral: ";std::cin>>number;
    number = abs(number);
    for(int i = 1; i < number+1;i++){
        for(int j = 1; j < number+1;j++){
            if(j == i){
                temp_der = pow(i, 2)-i+1;
                total += temp_der;
                std::cout<<"der "<<i<<" x "<<j<<std::endl;
            }else if(j == 5 + (i -1)*(-1)){
                temp_izq = 1 + (i-1)*4;
                total += temp_izq;
                std::cout<<i<<" x "<<j<<std::endl;
            }
        }
    }
    std::cout<<"la suma de las diagonales "<<number<<" x "<<number<<" Es: "<<total;

    return 0;
}
/*
#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un número impar n para la espiral (n >= 1): ";
    std::cin >> n;

    if (n % 2 == 0 || n < 1) {
        std::cout << "Por favor, ingresa un número impar mayor o igual a 1." << std::endl;
        return 1;
    }

    // Calcula la suma de los números en la diagonal
    int suma_diagonal = 1; // Inicializamos con el número 1 (esquina superior izquierda)
    int incremento = 2; // Incremento para los siguientes números en la diagonal

    for (int i = 3; i <= n; i += 2) {
        // Sumamos los cuatro números en la diagonal
        suma_diagonal += 4 * (i * i) - 6 * (i - 1);
    }

    std::cout << "En una espiral de " << n << "x" << n << ", la suma es: " << suma_diagonal << "." << std::endl;

    return 0;
}
*/



