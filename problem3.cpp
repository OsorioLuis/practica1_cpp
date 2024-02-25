#include <iostream>

int main34(){
    int data, condition, day;
    while(true){
        std::cout<<"Ingresa un mes en formato numerico: ";std::cin>>data;
        if(data <= 12){
            if(data == 1 || data == 3 || data == 5 || data == 7 || data == 8 || data == 10 || data == 12){
                condition = 31;
            }else if(data == 6 || data == 9 || data == 11){
                condition = 30;
            }else{
                condition = 29;
            }
        }else{
            std::cout<<"Debe ser menor o igual a 12";break;
        }
        std::cout<<"Ingresa un dia en formato numerico: ";std::cin>>day;
        if(data == 2 && day == 29){
            std::cout<<"EL formato es valido, es biciesto "<<day<<"/"<<data;break;
        }else if(day <= condition){
            std::cout<<"EL formato es valido "<<day<<"/"<<data;break;
        }else{
            std::cout<<"EL formato ingresado no es valido";break;
        }
    }



    return 0;
}
