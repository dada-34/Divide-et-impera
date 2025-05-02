#include <iostream>
using namespace std;

void ret_ok(int &ok,int el1,int el2){
    if(el1!=el2)
        ok=0;
}   

int DivEqual(int v[100], int st, int dr,int &ok)
{   
    int mij = (st + dr) / 2;
    int el1, el2;
    if (st == dr)
        return v[st];
    else
    {
        el1 = DivEqual(v, st, mij,ok);
        el2 = DivEqual(v, mij + 1, dr,ok);
        ret_ok(ok,el1,el2);
        return el1;
    }
}

int main()
{
    int v[100], n, i;
    cin >> n;
    int ok = 1;
    for (i = 0; i < n; i++)
        cin >> v[i];
    int elementcom = DivEqual(v, 0, n - 1,ok);
    cout << ok << endl;

    return 0;
}