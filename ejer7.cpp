#include <iostream>

using namespace std;

int main2(){
    float a,temp;
    cout<<"Digita el numero: ";cin>>a;
    temp = a;

    while(a > 0){
        a--;
        temp += a;

    };
    cout<<"La sumatoria desde cero hasta cinco es "<<temp;
    return 0;
}
