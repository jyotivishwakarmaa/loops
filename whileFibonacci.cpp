#include<iostream>
using namespace std;

int main(){

    int ft=0;
    int st=1;
    int next=0;
    int i=0;
    int n=5;

    while(i<=n){
        if(i==0){
            cout<<ft;
            i++;
            continue;
        }
        if(i==1){
            cout<<st;
            i++;
            continue;
        }
        next=ft+st;
        ft=st;
        st=next;
        cout<<next;
        i++;
    }
}
