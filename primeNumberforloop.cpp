#include<iostream>
using namespace std;

int main(){
    
    int num=7;
    int count=0;

    for(int i=1; i<=num; i++){

        if(num%i==0){

            count++;
        }
    }
        if(count==2){
            cout<<"is prime";
        }
        else{

            cout<<"not prime";
        }
    }
