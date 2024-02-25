#include <iostream>

int main33() {
    std::cout << "Piensa en un nimero entre 0 y 100 (sin decirme cual es)." << std::endl;
    std::cout << "Presiona Enter cuando ests listo para continuar..." << std::endl;
    std::cin.get();

    int minimo = 0;
    int maximo = 100;

    while (true) {
        // Calcula el número medio entre el rango actual
        int numero_adivinado = (minimo + maximo) / 2;

        std::cout << "Es " << numero_adivinado << " tu numero (responde con '>', '<' o '=')" << std::endl;
        char respuesta;
        std::cin >> respuesta;

        if (respuesta == '>') {
            minimo = numero_adivinado + 1;
        } else if (respuesta == '<') {
            maximo = numero_adivinado - 1;
        } else if (respuesta == '=') {
            std::cout << "Adivine Tu numero es " << numero_adivinado << "." << std::endl;
            break;
        } else {
            std::cout << "Respuesta no valida. Por favor, usa '>', '<' o '='." << std::endl;
        }
    }

    return 0;
}
