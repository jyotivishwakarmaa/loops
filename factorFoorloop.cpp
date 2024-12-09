#include<iostream>
using namespace std;

int main(){
    
    int num=6;
    
    for(int i=1; i<=6; i++){

        if(num%i==0){
            cout<<i;
        }
    }
}