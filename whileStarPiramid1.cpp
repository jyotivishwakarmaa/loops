#include<iostream>
using namespace std;

int main(){
    int i=0;
    int j=0;

    while(i<=5){
        
        while(j<=i){
        cout<<"*"<<" ";
        j++;
    }
    j=0;
    i++;
    cout<<endl;
  }
}