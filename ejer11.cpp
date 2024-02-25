#include <iostream>

using namespace std;

int main4(){
    int a, cou = 1;
    cout<<"Digita el numero que quieres multiplicar ";cin>>a;

    while(cou < 11){
        cout<<cou<<"x"<<a<<"= "<<cou*a<<endl;
        cou++;
    }
    return 0;

};
