#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("hanoi.in");
ofstream fout("hanoi.out");

void af1(int n, int i){
    if(i<n-1){
         fout<<"A->B"<<endl;
         af1(n,i+1);
    }
}

void af2(int n, int i){
    if(i<n-1){
         fout<<"B->C"<<endl;
         af2(n,i+1);
    }
}


int main(){
    int i,n,cnt=0;
    fin>>n;
    i=0;
    cnt = n+n-1;
    fout<<cnt<<endl;
    af1(n,0);
    fout<<"A->C"<<endl;
    af2(n,0);
}