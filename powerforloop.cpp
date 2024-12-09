#include<iostream>
using namespace std;

int main(){
    
    int number=2;
    int power=3;
    int sum=1;

    for(int i=1; i<=power; i++){
      sum=sum*number;
     }
     cout<<sum;
}