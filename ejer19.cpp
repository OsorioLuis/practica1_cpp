#include <iostream>

using namespace std;

int main9(){
    int b = 1, band;
    long long a;
    cout<<"Digita el numero que desees: ";cin>>a;

    while(b < a+1){
        if(a % b == 0){
            band++;
        };
        if(band == 2){
            cout<<"El numero"<<a<<"es primo";
            break;
        }else{
            cout<<"El numero"<<a<<" NO es primo";
            break;
        };
        b++;
    }

    return 0;
}
