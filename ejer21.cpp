#include <iostream>

using namespace std;

int main10(){
    char c, result;
    char min_al[] = "abcdefghijklmnopqrstuvwxyz";
    char may_al[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<"Digita el caracter que desees";cin>>c;

    for(int i = 0; i<sizeof(min_al); i++){
        if(c == min_al[i]){
            result = may_al[i];
            break;
        }else if(c == may_al[i]){
            result = min_al[i];
            break;
        }else{
            cout<<"el caracter ingresado no es valido";
            result = c;
            break;
        }
    };
    cout<<"La letra convertida es "<<result;
    return 0;
}
