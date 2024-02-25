#include <iostream>
#include <cmath>

int main39() {
    int value, digits_suma = 0, temp;
    std::cout << "ingresa un numero entero: ";std::cin>>value;
    value = abs(value);

    temp = value;

    while (temp > 0) {
        int digito = temp % 10;
        digits_suma += static_cast<int>(std::pow(digito, digito));
        temp = temp / 10;
    }

    std::cout<<"el resultado de la suma es: "<<digits_suma;

    return 0;
}
