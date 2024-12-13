#include<iostream>
using namespace std;

int main(){

    int smallnum=3;
    int largenum=6;
    int hcf;

    for(int i=1; i<=smallnum; i++){

        if(smallnum%i==0 && largenum%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
}
