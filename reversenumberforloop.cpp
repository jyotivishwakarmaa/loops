#include<iostream>
using namespace std;

int main(){

    int rv=0;
    int ld=0;

    for(int number=1234; number>=0; number/10){

    ld = number%10;
    rv = rv*10 + ld;
    }
    cout<<rv<<endl;
}