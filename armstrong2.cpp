#include<iostream>
using namespace std;

int main(){

    int num=153;
    int ld=0;
    int rv=0;

    for(int number=153; number>0; number=number/10){

        ld=number%10;
        rv=rv+ld*ld*ld;
    }
    if(rv==num){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
}  
