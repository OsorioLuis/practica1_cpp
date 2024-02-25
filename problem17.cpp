
 #include <iostream>

int main() {
    int number, cont;
    std::cout << "ingresa un numero positivo ";std::cin>>number;
    number = abs(number);

    int triangular = 1;
    int n = 2;

    while (true) {
        int cnt = 0; //esta variable se reinicia
        for(int i = 1; i * i <= triangular; ++i){ //siempre va a iterar para un rango de numeros especifico, verifica los multiplos para los numeros
            if(triangular % i == 0){
                cnt++;
                if(i != triangular / i){
                    cnt++;//este cuenta en caso de que tenga otro multiplo
                }
            }
        }
        if(cnt > number){
            cont = cnt;
            break;
        }
        // asigna los numeros triangulares, 1, 3, 6...
        triangular += n;
        n++;
    }

    std::cout<<"El primer numero triangular con mas de "<<number<<" divisores es: "<<triangular<<" que tiene "<<cont<<" divisores";

    return 0;
}






