#include <iostream>
using namespace std;

int nrdiv3(int v[100], int st, int dr)
{
    int mij = (st+dr)/2;
    int cnt=0;
    if(st == dr)
        if(v[st]%3 == 0){
            cnt++;
            return cnt;
        }
        else
            return cnt;
    else{
        cnt += nrdiv3(v,st,mij);
        cnt += nrdiv3(v,mij+1,dr);
    }
    return cnt;
            
}

int main()
{
    int v[100], n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int nrdivizcu3 = nrdiv3(v, 0, n-1);
    cout << nrdivizcu3 << endl;
}
