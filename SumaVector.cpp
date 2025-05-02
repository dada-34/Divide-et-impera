#include <iostream>
using namespace std;

int sum(int v[],int st, int dr){
    int mij = (st+dr)/2;
    if(st==dr){
        return v[st];
    }
    int suma1 = sum(v,st,mij);
    int suma2 = sum(v,mij+1,dr);
    return suma1+suma2;
}

int main()
{
    int v[100], n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout<<sum(v,0,n-1)<<'\n';
    return 0;
}