#include<iostream>
using namespace std;

int main(){

    int num;=12;

    if(num<2){
        cout<<"not aprime";
        return 0;
    }

    for(int i=2; i*i<=num; i++){

        if(num%i==0){
            cout<<"Not aprime number";
            return 0;
        }
    }
             cout<<"prime number";
            return 0;
}