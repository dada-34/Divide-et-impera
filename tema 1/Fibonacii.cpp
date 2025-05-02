#include<iostream>
using namespace std;

void Fib(int el1,int el2,int &n){
    int aux;
    if(n!=0){
        cout<<el2+el1<<" ";
        aux = el2;
        el2 = el2+el1;
        el1 = aux;
        n--;
        Fib(el1,el2,n);
    }
    else
        return;
}

int main(){
    int p1,p2,n;
    cin>>n;
    p1=1;
    p2=1;
    cout<<1<<" "<<1<<" ";
    Fib(p1,p2,n);
}