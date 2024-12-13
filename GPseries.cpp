#include<iostream>
#include <cmath>
using namespace std;

int main(){

    int a=1;
    int r=3;
    int GP=0;
    
    for(int i =0; i<=4; i++){

        GP=a*pow(r,i);
        cout<<GP<<endl;
    }
}
    