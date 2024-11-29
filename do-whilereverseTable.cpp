#include<iostream>
using namespace std;

int main(){

    int num;
    int i=10;

    cout<<"Enter a number : ";
    cin>>num;

   do{
        cout<<num*i<<endl;
        i--;

    } while(i>=1);
}