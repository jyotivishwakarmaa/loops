#include<iostream>
using namespace std;

int main(){

    int smallnum=3;
    int largenum=6;
    int lcm;

    for(int i = largenum;; i=i+largenum){

        if(i%smallnum==0 && i%largenum==0){
            lcm=i;
            break;
        }
    }
    cout<<lcm;
}