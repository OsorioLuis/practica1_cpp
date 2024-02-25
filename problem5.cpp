#include <iostream>

using namespace std;

int main35(){
    int value, spaces, back;
    bool decre = false;
    while(true){
        std::cout<<"Ingresa un valor impar";cin>>value;
        if(value % 2 == 0){
            std::cout<<"Debe ser un numero impar";break;
        }else{
            for(int i = 0; i < value+1;i++){
                spaces = value - 2*i;
                for(int j = 0; j < value;j++){
                    if(spaces < 0){
                        back = abs(spaces);
                        if((back - 1) / 2 == j){
                            for(int m = 0; m < (value - (back -1));m++){
                                std::cout<<"*";
                            }
                        }else{
                            std::cout<<" ";
                        }
                    }else{
                        if((spaces - 1) / 2 == j){
                            for(int m = 0; m < (value - (spaces -1));m++){
                                std::cout<<"*";
                            }
                        }else{
                            std::cout<<" ";
                        }
                    }
                }
                std::cout<<endl;
            }
        }
    }


    return 0;
}



