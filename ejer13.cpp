#include <iostream>

using namespace std;

int main5(){
    int a, b = 1;
    cout<<"Digita el numero a conocer ";cin>>a;

    while(b < a+1){
        if(a % b == 0){
            cout<<b<<" es multiplo de "<<a<<endl;
        };
        b++;
    };
    return 0;
};
